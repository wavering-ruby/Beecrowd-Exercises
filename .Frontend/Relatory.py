import os
from core.folders import *
from core.label import *

# 1. Pega o diretório atual do script
script_dir = os.path.dirname(os.path.abspath(__file__))

# 2. Constrói o caminho absoluto
languages = ["C", "C#", "C++", "Java", "JavaScript", "Kotlin", "Lua", "Pascal", "Python", "SQL", "Swift"]
folders_path = []

for lang in languages:
    f_path = os.path.join(script_dir, "..", lang)
    f_path = os.path.normpath(f_path)  # Remove "../" e normaliza
    folders_path.append(f_path)

print(folders_path)

# 3. Verifica se o caminho existe antes de usar
if not os.path.exists(f_path):
    raise FileNotFoundError(f"Pasta não encontrada: {f_path}")

# Definindo a quantidade de arquivos por type
beecrowd_exercises = {
    "1. Beginner": 334,
    "2. Ad-Hoc": 850,
    "3. Strings": 150,
    "4. Structures and Librarys": 180,
    "5. Mathematics": 260,
    "6. Paradigms": 215,
    "7. Graphs": 277,
    "8. Computational Geometry": 83,
    "9. SQL": 50
}

# Exibe os dados (usando a função printFolderData do exemplo anterior)
# print_folder_data(get_folder_structure(f_path, script_dir, [".cpp"]), base_path = f_path)
perc_folder = calculating_percentage(beecrowd_exercises, get_folder_structure(f_path, script_dir, [".cpp"]))

for folder_info in perc_folder:
    print(label_perc(folder_info["percentage"], extension=folder_info["extension"]))