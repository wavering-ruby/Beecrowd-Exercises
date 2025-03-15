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
                if os.path.isfile(os.path.join(item_path, file)))
            
            counts.append(file_count)
    
    return counts

# Exibe a lista com a quantidade de arquivos em cada pasta
print(number_files())