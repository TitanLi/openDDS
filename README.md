# openDDS
## 安裝步驟
1. [Visual Studio](https://docs.microsoft.com/zh-tw/visualstudio/install/install-visual-studio)
2. 開啟Visual Studio Installer
3. 安裝Desktop development with c++ </br>(必須勾選C++/CLI support)</br>
![install](https://github.com/TitanLi/openDDS/blob/master/picture/install.PNG)</br>
![net](https://github.com/TitanLi/openDDS/blob/master/picture/NET.PNG)</br>
![cli](https://github.com/TitanLi/openDDS/blob/master/picture/CLI.PNG)
4. 按檔案 -> 新增 -> 專案 -> Visual C++ -> CLR</br>
![專案1](https://github.com/TitanLi/openDDS/blob/master/picture/專案1.PNG)
5. Right click on the DDS project and choose Properties option
6. then set Linker -> System -> SubSystem</br>
![屬性1](https://github.com/TitanLi/openDDS/blob/master/picture/屬性1.PNG)
7. then set Linker -> Advanced -> Entry Point</br>
![屬性2](https://github.com/TitanLi/openDDS/blob/master/picture/屬性2.PNG)
