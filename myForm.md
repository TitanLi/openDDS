# myForm
### 階層運算
```c++
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^ in = textBox1->Text;
		int ini = System::Convert::ToInt16(in);
		int fact = 1;
		for (int i = 1; i < ini; i++) {
			fact = fact * i;
		}

		in = System::Convert::ToString(fact);

		label4->Text = in;
	}
```
### FolderBrowserDialog
```c++
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
    FolderBrowserDialog^ folderBrowserDialog1;
    folderBrowserDialog1 = gcnew  System::Windows::Forms::FolderBrowserDialog;

    // Show the FolderBrowserDialog.
    System::Windows::Forms::DialogResult result =   folderBrowserDialog1->ShowDialog();
    if (result == System::Windows::Forms::DialogResult::OK)
    {
      label4 ->Text = folderBrowserDialog1->SelectedPath;
    }
	}
```
### OpenFileDialog
```c++
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
    OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

    openFileDialog1->InitialDirectory = "c:\\";
    openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
    openFileDialog1->FilterIndex = 2;
    openFileDialog1->RestoreDirectory = true;

    if (openFileDialog1->ShowDialog() ==   System::Windows::Forms::DialogResult::OK)
    {
      label4->Text = openFileDialog1->FileName;
    }
	}
```
