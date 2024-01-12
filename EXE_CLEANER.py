import os

here = os.getcwd()
folders = ['easy100']
for folder in folders:
	for file in os.listdir(f"{here}\\{folder}"):
		if file.split('.')[-1] == "exe":
			os.remove(f"{here}\\{folder}\\{file}")