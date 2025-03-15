import os

def folders_name():
    lang_folders = []
    
    # Usando os.walk para percorrer o diretório
    for root, dirs, files in os.walk('C:/Users/mgmde/OneDrive/Desktop/Beecrowd-Exercises'):
        for dir in dirs:
            if not dir.startswith('.'):  # Ignora diretórios ocultos ou que começam com '.'
                lang_folders.append(dir)
        break  # Interrompe após a primeira iteração para evitar percorrer subdiretórios
    
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
            completion_percentages.append(round(percentage, 2))  # Arredonda para 2 casas decimais
    return completion_percentages

def generate_markdown_content(lang_folders, completion_percentages):
    """
    Gera o conteúdo do arquivo Markdown.
    :param lang_folders: Lista de nomes das pastas (linguagens).
    :param completion_percentages: Lista de porcentagens de conclusão.
    :return: Conteúdo do arquivo Markdown como uma string.
    """
    markdown_content = "\n## Progresso dos Exercícios\n\n"
    markdown_content += "Abaixo está o progresso de conclusão dos exercícios por linguagem:\n\n"
    
    for i in range(len(lang_folders)):
        markdown_content += f"- **{lang_folders[i]}**: {completion_percentages[i]}% concluído\n"
    
    markdown_content += "\n---\n"
    markdown_content += "Atualizado automaticamente.\n"
    
    return markdown_content

def update_markdown_file(new_content, file_path):
    """
    Atualiza o arquivo Markdown, substituindo a seção de progresso antiga pela nova.
    :param new_content: Novo conteúdo da seção de progresso.
    :param file_path: Caminho do arquivo Markdown.
    """
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
    lines.append("\n" + new_content)
    
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
    
    # Gera o conteúdo do arquivo Markdown
    markdown_content = generate_markdown_content(lang_folders, completion_percentages)
    
    # Caminho do arquivo Markdown
    markdown_file_path = 'C:/Users/mgmde/OneDrive/Desktop/Beecrowd-Exercises/README.md'  # Altere para o caminho desejado
    
    # Atualiza o arquivo Markdown
    update_markdown_file(markdown_content, markdown_file_path)
    
    print(f"Progresso atualizado no arquivo Markdown em: {markdown_file_path}")

if __name__ == "__main__":
    main()