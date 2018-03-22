# windows form
## 安裝步驟
1. [Visual Studio](https://docs.microsoft.com/zh-tw/visualstudio/install/install-visual-studio)
2. 開啟Visual Studio Installer
3. 安裝Desktop development with c++ </br>(必須勾選C++/CLI support)</br>
![install](https://github.com/TitanLi/openDDS/blob/master/picture/install.PNG)</br>
![net](https://github.com/TitanLi/openDDS/blob/master/picture/NET.PNG)</br>
![cli](https://github.com/TitanLi/openDDS/blob/master/picture/CLI.PNG)
4. 按檔案 -> 新增 -> 專案 -> Visual C++ -> CLR</br>
![專案1](https://github.com/TitanLi/openDDS/blob/master/picture/專案1.PNG)
5. Right click on the project and choose Properties option
6. then set Linker -> System -> SubSystem</br>
![屬性1](https://github.com/TitanLi/openDDS/blob/master/picture/屬性1.PNG)
7. then set Linker -> Advanced -> Entry Point</br>
![屬性2](https://github.com/TitanLi/openDDS/blob/master/picture/屬性2.PNG)
8. Add a new item Right click on the project -> Add -> New Item then select Windows Form
![專案2](https://github.com/TitanLi/openDDS/blob/master/picture/專案2.PNG)
9. click on the MyForm.cpp insert
```
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(%form);
}
```
![專案3](https://github.com/TitanLi/openDDS/blob/master/picture/專案3.PNG)
10. restart visual studio
11. Right click on the MyForm.h -> 設計工具顯示
![專案4](https://github.com/TitanLi/openDDS/blob/master/picture/專案4.PNG)
