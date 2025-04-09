@echo off
title dag

:main


set /p user="username: "
set /p host="hostname: "

for /l %%a in ( 1,1,254 ) do (

wdagger -h %host% -u %username%

)

echo bruh
pause > nul
