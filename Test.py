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
    
    for root, dirs, files in os.walk('C:/Users/mgmde/OneDrive/Desktop/Beecrowd-Exercises'):
        # Conta apenas arquivos que não são ocultos
        file_count = sum(1 for file in files if not file.startswith('.'))
        counts.append(file_count)  # Adiciona a contagem de arquivos à lista
    
    return counts

# Exibe a lista com a quantidade de arquivos em cada pasta
print(number_files())