#pragma once

namespace GraphicsV11 {

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
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Button^  BuildFractalBtn;
	protected:
	private: System::Windows::Forms::Button^  ColorModelsBtn;
	private: System::Windows::Forms::Button^  FigureMoveBtn;
	private: System::Windows::Forms::Button^  ReferenceBtn;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->BuildFractalBtn = (gcnew System::Windows::Forms::Button());
			this->ColorModelsBtn = (gcnew System::Windows::Forms::Button());
			this->FigureMoveBtn = (gcnew System::Windows::Forms::Button());
			this->ReferenceBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// BuildFractalBtn
			// 
			this->BuildFractalBtn->AutoSize = true;
			this->BuildFractalBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->BuildFractalBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->BuildFractalBtn->FlatAppearance->BorderSize = 0;
			this->BuildFractalBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BuildFractalBtn->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BuildFractalBtn->ForeColor = System::Drawing::Color::White;
			this->BuildFractalBtn->Location = System::Drawing::Point(127, 155);
			this->BuildFractalBtn->Name = L"BuildFractalBtn";
			this->BuildFractalBtn->Size = System::Drawing::Size(315, 69);
			this->BuildFractalBtn->TabIndex = 0;
			this->BuildFractalBtn->Text = L"Build fractal";
			this->BuildFractalBtn->UseVisualStyleBackColor = false;
			// 
			// ColorModelsBtn
			// 
			this->ColorModelsBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->ColorModelsBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->ColorModelsBtn->FlatAppearance->BorderSize = 0;
			this->ColorModelsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ColorModelsBtn->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ColorModelsBtn->ForeColor = System::Drawing::Color::White;
			this->ColorModelsBtn->Location = System::Drawing::Point(127, 257);
			this->ColorModelsBtn->Name = L"ColorModelsBtn";
			this->ColorModelsBtn->Size = System::Drawing::Size(315, 69);
			this->ColorModelsBtn->TabIndex = 1;
			this->ColorModelsBtn->Text = L"Color models";
			this->ColorModelsBtn->UseVisualStyleBackColor = false;
			// 
			// FigureMoveBtn
			// 
			this->FigureMoveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->FigureMoveBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->FigureMoveBtn->FlatAppearance->BorderSize = 0;
			this->FigureMoveBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FigureMoveBtn->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FigureMoveBtn->ForeColor = System::Drawing::Color::White;
			this->FigureMoveBtn->Location = System::Drawing::Point(127, 367);
			this->FigureMoveBtn->Name = L"FigureMoveBtn";
			this->FigureMoveBtn->Size = System::Drawing::Size(315, 69);
			this->FigureMoveBtn->TabIndex = 2;
			this->FigureMoveBtn->Text = L"Figure movement";
			this->FigureMoveBtn->UseVisualStyleBackColor = false;
			// 
			// ReferenceBtn
			// 
			this->ReferenceBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->ReferenceBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->ReferenceBtn->FlatAppearance->BorderSize = 0;
			this->ReferenceBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ReferenceBtn->Font = (gcnew System::Drawing::Font(L"Roboto", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReferenceBtn->ForeColor = System::Drawing::Color::White;
			this->ReferenceBtn->Location = System::Drawing::Point(127, 473);
			this->ReferenceBtn->Name = L"ReferenceBtn";
			this->ReferenceBtn->Size = System::Drawing::Size(315, 69);
			this->ReferenceBtn->TabIndex = 3;
			this->ReferenceBtn->Text = L"Reference";
			this->ReferenceBtn->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(485, 155);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(595, 302);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->ClientSize = System::Drawing::Size(1264, 749);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->ReferenceBtn);
			this->Controls->Add(this->FigureMoveBtn);
			this->Controls->Add(this->ColorModelsBtn);
			this->Controls->Add(this->BuildFractalBtn);
			this->Name = L"MyForm";
			this->Text = L"Graphics";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
