#!bin/bash
mkdir -p backup
cp -r data/ backup/data_backup_$(date+%Y%m%d%H%M%S)
echo "Sauvegarde terminée !"