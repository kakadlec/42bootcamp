echo "*** INICIO - COPIANDO ARQUIVOS PARA REPO PARTICULAR"
cp -r ~/LISTS ~/BACKUP/
cp -r ~/RUSHES ~/BACKUP/
cp -r ~/SCRIPTS ~/BACKUP/
find ~/BACKUP/LISTS -type d -name ".git" -exec rm -rf "{}" \;
find ~/BACKUP/RUSHES -type d -name ".git" -exec rm -rf "{}" \;
find ~/BACKUP/LISTS -type f -name ".*" -delete
find ~/BACKUP/RUSHES -type f -name ".*" -delete
echo "*** FIM - COPIANDO ARQUIVOS PARA REPO PARTICULAR"
