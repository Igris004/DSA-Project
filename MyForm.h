#pragma once

namespace ProjectDSACpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			pnlNav->Height = btnArray->Height;
			pnlNav->Top = btnArray->Top;
			pnlNav->Left = btnArray->Left;
			btnArray->BackColor = Color::FromArgb(46, 51, 73);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ btnQueue;
	private: System::Windows::Forms::Button^ btnStack;
	private: System::Windows::Forms::Button^ btnLinkedList;
	private: System::Windows::Forms::Button^ btnArray;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnHeap;
	private: System::Windows::Forms::Button^ btnBST;
	private: System::Windows::Forms::Panel^ pnlNav;
	private: System::Windows::Forms::Button^ btnSorts;
	private: System::Windows::Forms::Button^ btnExit;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pnlNav = (gcnew System::Windows::Forms::Panel());
			this->btnSorts = (gcnew System::Windows::Forms::Button());
			this->btnHeap = (gcnew System::Windows::Forms::Button());
			this->btnBST = (gcnew System::Windows::Forms::Button());
			this->btnQueue = (gcnew System::Windows::Forms::Button());
			this->btnStack = (gcnew System::Windows::Forms::Button());
			this->btnLinkedList = (gcnew System::Windows::Forms::Button());
			this->btnArray = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel1->Controls->Add(this->pnlNav);
			this->panel1->Controls->Add(this->btnSorts);
			this->panel1->Controls->Add(this->btnHeap);
			this->panel1->Controls->Add(this->btnBST);
			this->panel1->Controls->Add(this->btnQueue);
			this->panel1->Controls->Add(this->btnStack);
			this->panel1->Controls->Add(this->btnLinkedList);
			this->panel1->Controls->Add(this->btnArray);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(186, 577);
			this->panel1->TabIndex = 0;
			// 
			// pnlNav
			// 
			this->pnlNav->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->pnlNav->Location = System::Drawing::Point(0, 193);
			this->pnlNav->Name = L"pnlNav";
			this->pnlNav->Size = System::Drawing::Size(3, 100);
			this->pnlNav->TabIndex = 2;
			// 
			// btnSorts
			// 
			this->btnSorts->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnSorts->FlatAppearance->BorderSize = 0;
			this->btnSorts->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSorts->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSorts->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->btnSorts->Location = System::Drawing::Point(0, 535);
			this->btnSorts->Name = L"btnSorts";
			this->btnSorts->Size = System::Drawing::Size(186, 42);
			this->btnSorts->TabIndex = 7;
			this->btnSorts->Text = L"Sorts";
			this->btnSorts->UseVisualStyleBackColor = true;
			this->btnSorts->Click += gcnew System::EventHandler(this, &MyForm::btnSorts_Click);
			this->btnSorts->Leave += gcnew System::EventHandler(this, &MyForm::btnSorts_Leave);
			// 
			// btnHeap
			// 
			this->btnHeap->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnHeap->FlatAppearance->BorderSize = 0;
			this->btnHeap->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHeap->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHeap->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->btnHeap->Location = System::Drawing::Point(0, 354);
			this->btnHeap->Name = L"btnHeap";
			this->btnHeap->Size = System::Drawing::Size(186, 42);
			this->btnHeap->TabIndex = 6;
			this->btnHeap->Text = L"Heap";
			this->btnHeap->UseVisualStyleBackColor = true;
			this->btnHeap->Click += gcnew System::EventHandler(this, &MyForm::btnHeap_Click);
			this->btnHeap->Leave += gcnew System::EventHandler(this, &MyForm::btnHeap_Leave);
			// 
			// btnBST
			// 
			this->btnBST->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnBST->FlatAppearance->BorderSize = 0;
			this->btnBST->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBST->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBST->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->btnBST->Location = System::Drawing::Point(0, 312);
			this->btnBST->Name = L"btnBST";
			this->btnBST->Size = System::Drawing::Size(186, 42);
			this->btnBST->TabIndex = 5;
			this->btnBST->Text = L"Binary Search Tree";
			this->btnBST->UseVisualStyleBackColor = true;
			this->btnBST->Click += gcnew System::EventHandler(this, &MyForm::btnBST_Click);
			this->btnBST->Leave += gcnew System::EventHandler(this, &MyForm::btnBST_Leave);
			// 
			// btnQueue
			// 
			this->btnQueue->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnQueue->FlatAppearance->BorderSize = 0;
			this->btnQueue->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnQueue->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQueue->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->btnQueue->Location = System::Drawing::Point(0, 270);
			this->btnQueue->Name = L"btnQueue";
			this->btnQueue->Size = System::Drawing::Size(186, 42);
			this->btnQueue->TabIndex = 4;
			this->btnQueue->Text = L"Queue";
			this->btnQueue->UseVisualStyleBackColor = true;
			this->btnQueue->Click += gcnew System::EventHandler(this, &MyForm::btnQueue_Click);
			this->btnQueue->Leave += gcnew System::EventHandler(this, &MyForm::btnQueue_Leave);
			// 
			// btnStack
			// 
			this->btnStack->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnStack->FlatAppearance->BorderSize = 0;
			this->btnStack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnStack->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStack->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->btnStack->Location = System::Drawing::Point(0, 228);
			this->btnStack->Name = L"btnStack";
			this->btnStack->Size = System::Drawing::Size(186, 42);
			this->btnStack->TabIndex = 3;
			this->btnStack->Text = L"Stack";
			this->btnStack->UseVisualStyleBackColor = true;
			this->btnStack->Click += gcnew System::EventHandler(this, &MyForm::btnStack_Click);
			this->btnStack->Leave += gcnew System::EventHandler(this, &MyForm::btnStack_Leave);
			// 
			// btnLinkedList
			// 
			this->btnLinkedList->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnLinkedList->FlatAppearance->BorderSize = 0;
			this->btnLinkedList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLinkedList->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLinkedList->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->btnLinkedList->Location = System::Drawing::Point(0, 186);
			this->btnLinkedList->Name = L"btnLinkedList";
			this->btnLinkedList->Size = System::Drawing::Size(186, 42);
			this->btnLinkedList->TabIndex = 2;
			this->btnLinkedList->Text = L"Linked List";
			this->btnLinkedList->UseVisualStyleBackColor = true;
			this->btnLinkedList->Click += gcnew System::EventHandler(this, &MyForm::btnLinkedList_Click);
			this->btnLinkedList->Leave += gcnew System::EventHandler(this, &MyForm::btnLinkedList_Leave);
			// 
			// btnArray
			// 
			this->btnArray->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnArray->FlatAppearance->BorderSize = 0;
			this->btnArray->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnArray->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnArray->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->btnArray->Location = System::Drawing::Point(0, 144);
			this->btnArray->Name = L"btnArray";
			this->btnArray->Size = System::Drawing::Size(186, 42);
			this->btnArray->TabIndex = 1;
			this->btnArray->Text = L"Array";
			this->btnArray->UseVisualStyleBackColor = true;
			this->btnArray->Click += gcnew System::EventHandler(this, &MyForm::btnArray_Click);
			this->btnArray->Leave += gcnew System::EventHandler(this, &MyForm::btnArray_Leave);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(186, 144);
			this->panel2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->label1->Location = System::Drawing::Point(12, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Data Sorting Visualizer";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(60, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(63, 63);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// btnExit
			// 
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->ForeColor = System::Drawing::Color::White;
			this->btnExit->Location = System::Drawing::Point(914, 12);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(25, 25);
			this->btnExit->TabIndex = 1;
			this->btnExit->Text = L"X";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			this->btnExit->MouseLeave += gcnew System::EventHandler(this, &MyForm::btnExit_MouseLeave);
			this->btnExit->MouseHover += gcnew System::EventHandler(this, &MyForm::btnExit_MouseHover);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(951, 577);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
	}
private: 
	System::Void btnArray_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		pnlNav->Height = btnArray->Height;
		pnlNav->Top = btnArray->Top;
		pnlNav->Left = btnArray->Left;
		btnArray->BackColor = Color::FromArgb(46, 51, 73);
	}
	System::Void btnLinkedList_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		pnlNav->Height = btnLinkedList->Height;
		pnlNav->Top = btnLinkedList->Top;
		pnlNav->Left = btnLinkedList->Left;
		btnLinkedList->BackColor = Color::FromArgb(46, 51, 73);
	}
	System::Void btnStack_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		pnlNav->Height = btnStack->Height;
		pnlNav->Top = btnStack->Top;
		pnlNav->Left = btnStack->Left;
		btnStack->BackColor = Color::FromArgb(46, 51, 73);
	}
	System::Void btnQueue_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		pnlNav->Height = btnQueue->Height;
		pnlNav->Top = btnQueue->Top;
		pnlNav->Left = btnQueue->Left;
		btnQueue->BackColor = Color::FromArgb(46, 51, 73);
	}
	System::Void btnBST_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		pnlNav->Height = btnBST->Height;
		pnlNav->Top = btnBST->Top;
		pnlNav->Left = btnBST->Left;
		btnBST->BackColor = Color::FromArgb(46, 51, 73);
	}
	System::Void btnHeap_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		pnlNav->Height = btnHeap->Height;
		pnlNav->Top = btnHeap->Top;
		pnlNav->Left = btnHeap->Left;
		btnHeap->BackColor = Color::FromArgb(46, 51, 73);
	}
	System::Void btnSorts_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		pnlNav->Height = btnSorts->Height;
		pnlNav->Top = btnSorts->Top;
		pnlNav->Left = btnSorts->Left;
		btnSorts->BackColor = Color::FromArgb(46, 51, 73);
	}
private: System::Void btnArray_Leave(System::Object^ sender, System::EventArgs^ e) 
	{
		btnArray->BackColor = Color::FromArgb(24, 30, 54);
	}
private: System::Void btnLinkedList_Leave(System::Object^ sender, System::EventArgs^ e) {
	btnLinkedList->BackColor = Color::FromArgb(24, 30, 54);
}
private: System::Void btnStack_Leave(System::Object^ sender, System::EventArgs^ e) {
	btnStack->BackColor = Color::FromArgb(24, 30, 54);
}
private: System::Void btnQueue_Leave(System::Object^ sender, System::EventArgs^ e) {
	btnQueue->BackColor = Color::FromArgb(24, 30, 54);
}
private: System::Void btnBST_Leave(System::Object^ sender, System::EventArgs^ e) {
	btnBST->BackColor = Color::FromArgb(24, 30, 54);
}
private: System::Void btnHeap_Leave(System::Object^ sender, System::EventArgs^ e) {
	btnHeap->BackColor = Color::FromArgb(24, 30, 54);
}
private: System::Void btnSorts_Leave(System::Object^ sender, System::EventArgs^ e) {
	btnSorts->BackColor = Color::FromArgb(24, 30, 54);
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void btnExit_Enter(System::Object^ sender, System::EventArgs^ e) {
	btnExit->BackColor = Color::FromArgb(200, 0, 0);
}
private: System::Void btnExit_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	btnExit->BackColor = Color::FromArgb(100, 0, 0);
}
private: System::Void btnExit_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	btnExit->BackColor = Color::FromArgb(46, 51, 73);
}
};
}
