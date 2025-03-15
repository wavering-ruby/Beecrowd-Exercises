import os

def folders_name():
    lang_folders = []
    
    # Usando os.walk para percorrer o diretório
    for root, dirs, files in os.walk('C:/Users/mgmde/OneDrive/Desktop/Beecrowd-Exercises'):
        for dir in dirs:
            # Essa função faz para que ignore todos os diretórios (pastas) que começam com ponto (.)
            if not dir.startswith('.'): 
                lang_folders.append(dir)
        break  # Para evitar que percorra subpastas
    
    return lang_folders

def number_files():
    counts = []  # Lista para armazenar a quantidade de arquivos em cada pasta
    root_path = 'C:/Users/mgmde/OneDrive/Desktop/Beecrowd-Exercises'
    
    # Lista apenas os itens no nível superior do diretório
    for item in os.listdir(root_path):
        item_path = os.path.join(root_path, item)
        
        # Verifica se o item é uma pasta e não é oculta
        if os.path.isdir(item_path) and not item.startswith('.'):
            # Conta apenas arquivos (ignorando subpastas)
            file_count = sum(
                1 for file in os.listdir(item_path)
                if os.path.isfile(os.path.join(item_path, file))
            )
            
            counts.append(file_count)
    
    return counts

def calculate_completion_percentage(file_counts, defined_exercises):
    """
    Calcula a porcentagem de conclusão para cada pasta.
    :param file_counts: Lista com a quantidade de arquivos em cada pasta.
    :param defined_exercises: Lista com a quantidade de exercícios definidos por pasta.
    :return: Lista de porcentagens de conclusão.
    """
    completion_percentages = []
    for i in range(len(file_counts)):
        if defined_exercises[i] == 0:  # Evita divisão por zero
            completion_percentages.append(0)
        else:
            percentage = (file_counts[i] / defined_exercises[i]) * 100
            # Limita a porcentagem a 100%
            percentage = min(percentage, 100)
            completion_percentages.append(round(percentage, 2))  # Arredonda para 2 casas decimais
    return completion_percentages

def generate_badge(label, value, color="brightgreen"):
    """
    Gera uma tag (badge) no formato Markdown usando shields.io.
    
    :param label: Texto do lado esquerdo do badge.
    :param value: Texto do lado direito do badge.
    :param color: Cor do badge (padrão é "brightgreen").
    :return: String no formato de badge Markdown.
    """
    # Formata a URL do shields.io
    badge_url = f"https://img.shields.io/badge/{label}-{value}-{color}.svg"
    
    # Retorna o badge no formato Markdown
    return f"![{label}]({badge_url})"

def generate_progress_badges(lang_folders, completion_percentages):
    """
    Gera badges de progresso para cada linguagem.
    
    :param lang_folders: Lista de nomes das pastas (linguagens).
    :param completion_percentages: Lista de porcentagens de conclusão.
    :return: Lista de badges no formato Markdown.
    """
    badges = []
    for i in range(len(lang_folders)):
        label = lang_folders[i]
        value = f"{completion_percentages[i]}% concluído"  # Usando "%" diretamente
        color = "brightgreen" if completion_percentages[i] >= 75 else "orange" if completion_percentages[i] >= 50 else "red"
        badge = generate_badge(label, value, color)
        badges.append(badge)
    return badges

def update_markdown_file(badges, file_path):
    """
    Atualiza o arquivo Markdown com os badges de progresso.
    
    :param badges: Lista de badges no formato Markdown.
    :param file_path: Caminho do arquivo Markdown.
    """
    # Cria o conteúdo da seção de progresso
    progress_section = "## Progresso dos Exercícios\n\n"
    progress_section += "Abaixo está o progresso de conclusão dos exercícios por linguagem:\n\n"
    progress_section += " ".join(badges) + "\n\n"
    progress_section += "---\n"
    progress_section += "Atualizado automaticamente.\n"
    
    # Atualiza o arquivo Markdown
    with open(file_path, 'r', encoding='utf-8') as file:
        lines = file.readlines()
    
    # Encontra o início e o fim da seção de progresso
    start_index = None
    end_index = None
    for i, line in enumerate(lines):
        if line.startswith("## Progresso dos Exercícios"):
            start_index = i
        if start_index is not None and line.startswith("---"):
            end_index = i
            break
    
    # Remove a seção antiga, se existir
    if start_index is not None and end_index is not None:
        del lines[start_index:end_index + 1]
    
    # Adiciona a nova seção de progresso
    lines.append("\n" + progress_section)
    
    # Reescreve o arquivo com o conteúdo atualizado
    with open(file_path, 'w', encoding='utf-8') as file:
        file.writelines(lines)

def main():
    # Vetor com a quantidade de exercícios definidos por linguagem (na mesma ordem das pastas)
    defined_exercises = [10, 15, 20, 5, 8, 12, 7]  # Exemplo: Defina os valores corretos aqui
    
    # Obtém os nomes das pastas
    lang_folders = folders_name()
    
    # Obtém a quantidade de arquivos em cada pasta
    file_counts = number_files()
    
    # Calcula as porcentagens de conclusão
    completion_percentages = calculate_completion_percentage(file_counts, defined_exercises)
    
    # Gera os badges de progresso
    badges = generate_progress_badges(lang_folders, completion_percentages)
    
    # Caminho do arquivo Markdown
    markdown_file_path = 'C:/Users/mgmde/OneDrive/Desktop/Beecrowd-Exercises/README.md'  # Altere para o caminho desejado
    
    # Atualiza o arquivo Markdown com os badges
    update_markdown_file(badges, markdown_file_path)
    
    print(f"Badges de progresso atualizados no arquivo Markdown em: {markdown_file_path}")

if __name__ == "__main__":
    main()