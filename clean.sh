rm -rfi */a.out
rm -rfi */.*
rm -rfi */main.c
rm -rfi main.c
cat */* | grep "main"
norminette -R CheckForbiddenSourceHeader
