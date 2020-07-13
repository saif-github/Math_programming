
links to create new github repository
https://docs.github.com/en/github/importing-your-projects-to-github/adding-an-existing-project-to-github-using-the-command-line

…or create a new repository on the command line
echo "# Math_programming" >> README.md
git init
git add README.md
git commit -m "first commit"
git remote add origin https://github.com/saif-github/Math_programming.git
git push -u origin master

…or push an existing repository from the command line
git remote add origin https://github.com/saif-github/Math_programming.git
git push -u origin master
