echo "Removing old Makefiles and Binaries"
rm -rf ./Binaries
rm -rf ./App/Makefile
rm -rf ./Core/Makefile
rm -rf ./Makefile

echo "Running Scripts/Setup-Mac"
cd Scripts
./Setup-Mac.sh
cd ..
