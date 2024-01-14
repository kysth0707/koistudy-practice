import os

here = r'E:\GithubProjects\koistudy-practice'
folders = ['basic100']
for folder in folders:
	for file in os.listdir(f"{here}\\{folder}"):
		if file.split('.')[-1] == "exe" or file.split('.')[0] == "tempCodeRunnerFile":
			os.remove(f"{here}\\{folder}\\{file}")