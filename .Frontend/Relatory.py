import os

def get_folder_name(folder_path):
    """
        Retorna o nome da pasta a partir do caminho completo.
    """
    return os.path.basename(folder_path)

def get_folder_files(folder_path, extension = None):
    """
        Retorna uma lista de arquivos na pasta. Se `extension` for especificado, filtra por extensão (ex: '.cpp').
    """
    files = []
    for file in os.listdir(folder_path):
        file_path = os.path.join(folder_path, file)
        if os.path.isfile(file_path):
            if extension:
                if file.endswith(extension):
                    files.append(file)
            else:
                files.append(file)
    return files

def get_folder_structure(base_path, script_dir, extensions=None):
    """
        Essa função retorna a estrutura de pastas e arquivos de um diretório base especificado com a extensão do arquivo que foi passado.
        Ela é útil para organizar e visualizar rapidamente o conteúdo de um diretório sem precisar abrir cada pasta manualmente.
    """
    folders = ["1. Beginner", "2. Ad-Hoc", "4. Structures and Librarys"]  # Você pode listar pastas dinamicamente com os.listdir()
    folder_data = []
    
    for folder in folders:
        folder_path = os.path.join(base_path, folder)
        folder_data.append({
            "folderName": folder,
            "folderFiles": get_folder_files(folder_path, extensions[0])  # Assumindo que getFolderFiles existe
        })
    
    return folder_data

import os

def get_folder_structure(base_path, script_dir, extensions=None):
    """
    Retorna a estrutura de pastas e arquivos de um diretório base.
    
    Args:
        base_path (str): Caminho base das pastas (ex: "C++").
        script_dir (str): Diretório do script (para referência).
        extensions (list, optional): Lista de extensões de arquivo (ex: [".cpp"]). Padrão: None.
    
    Returns:
        list: Lista de dicionários no formato {"folderName": str, "folderFiles": list}.
    """
    if extensions is None:
        extensions = [".cpp"]  # Valor padrão se não for especificado

    folders = ["1. Beginner", "2. Ad-Hoc", "4. Structures and Librarys"]
    folder_data = []
    
    for folder in folders:
        folder_path = os.path.join(base_path, folder)
        folder_data.append({
            "folderName": folder,
            "folderFiles": get_folder_files(folder_path, extensions[0])  # Assume que get_folder_files existe
        })
    
    return folder_data


def print_folder_data(folder_data_list, base_path=""):
    """
    Imprime a estrutura de pastas e arquivos formatada.
    
    Args:
        folder_data_list (list): Lista de dicionários (saída de get_folder_structure).
        base_path (str, optional): Caminho base para links clicáveis.
    """
    print("\n📂 Estrutura de Pastas:")
    
    for folder_data in folder_data_list:
        print(f"\n📁 Pasta: {folder_data['folderName']}")
        print("📄 Arquivos:")
        
        if not folder_data['folderFiles']:
            print("  (Nenhum arquivo encontrado)")
        else:
            for i, file in enumerate(folder_data['folderFiles'], 1):  # Corrigido: 'folderFiles'
                if base_path:
                    full_path = f"{base_path}/{folder_data['folderName']}/{file}"  # Corrigido: 'folderName'
                    print(f"  {i}. [{file}]({full_path})")
                else:
                    print(f"  {i}. {file}")
        
        print(f"Total de arquivos: {len(folder_data['folderFiles'])}")
    print("\n✅ Fim da listagem.\n")

# 1. Pega o diretório atual do script
script_dir = os.path.dirname(os.path.abspath(__file__))

# 2. Constrói o caminho absoluto
folder_path = os.path.join(script_dir, "..", "C++")
folder_path = os.path.normpath(folder_path)  # Remove "../" e normaliza

# 3. Verifica se o caminho existe antes de usar
if not os.path.exists(folder_path):
    raise FileNotFoundError(f"Pasta não encontrada: {folder_path}")

# Exibe os dados (usando a função printFolderData do exemplo anterior)
print_folder_data(get_folder_structure(folder_path, script_dir, [".cpp"]), base_path = folder_path)