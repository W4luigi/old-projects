@echo off

w32tm /query /peers 
net stop w32time
net start w32time
w32tm /resync /nowait

echo Press any key...
set /p input=""
echo %input%

EOF