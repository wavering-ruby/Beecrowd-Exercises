import os;

def foldersName():
    langFolders = [];
    
    for root, dirs, files in os.walk('/C:/Users/mgmde/OneDrive/Desktop/Beecrowd-Exercises'):
        for dir in dirs:
            langFolders.append(dir)
        break
    
    return langFolders;

print(foldersName());