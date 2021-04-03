echo "*** INICIO - COPIANDO ARQUIVOS PARA REPO PARTICULAR"
cp -r ~/LISTS ~/BACKUP/
cp -r ~/RUSHES ~/BACKUP/
cp -r ~/SCRIPTS ~/BACKUP/
find ~/LISTS -type d -name ".git" -exec rm -rf "{}" \;
find ~/RUSHES -type d -name ".git" -exec rm -rf "{}" \;
find ~/LISTS -type f -name ".*" -delete
find ~/RUSHES -type f -name ".*" -delete
echo "*** FIM - COPIANDO ARQUIVOS PARA REPO PARTICULAR"
