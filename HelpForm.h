#pragma once

namespace Komb {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для HelpForm
	/// </summary>
	public ref class HelpForm : public System::Windows::Forms::Form
	{
	public:
		HelpForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~HelpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(349, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Справка";
			this->label1->Click += gcnew System::EventHandler(this, &HelpForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Комбинаторика -\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(142, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(626, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"изучает количество комбинаций из элементов определенной природы заданного конечно"
				L"го \r\nмножества.\r\n";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Перестановки -\r\n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(132, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(663, 32);
			this->label5->TabIndex = 4;
			this->label5->Text = L"комбинации из одних и тех же элементов, которые различаются только порядком их ра"
				L"сположения. \r\nЧисло перестановок определяется по формуле:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(369, 135);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Pₙ = n!";
			this->label6->Click += gcnew System::EventHandler(this, &HelpForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(132, 157);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(298, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"где n - количество элементов в комбинации.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(73, 177);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(674, 32);
			this->label8->TabIndex = 7;
			this->label8->Text = L"                   Например: Сколькими способами можно распределить 3 объекта раб"
				L"оты между 3 бригадами \r\nстроителей\?";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(252, 218);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 20);
			this->label9->TabIndex = 8;
			this->label9->Text = L"n = 3";
			this->label9->Click += gcnew System::EventHandler(this, &HelpForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(334, 218);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(152, 20);
			this->label10->TabIndex = 10;
			this->label10->Text = L"P₃ = 3! = 1 * 2 * 3 = 6";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(12, 261);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(108, 16);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Размещения -";
			this->label11->Click += gcnew System::EventHandler(this, &HelpForm::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(119, 261);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(614, 32);
			this->label12->TabIndex = 12;
			this->label12->Text = L"комбинации из n различных элементов по m элементов, отличающихся либо составом, л"
				L"ибо \r\nпорядком. Число размещений из n по m определяется как:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(334, 298);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(145, 20);
			this->label13->TabIndex = 13;
			this->label13->Text = L"Aₙᵐ = n! / (n - m)!";
			this->label13->Click += gcnew System::EventHandler(this, &HelpForm::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(73, 319);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(686, 32);
			this->label14->TabIndex = 14;
			this->label14->Text = L"                   Например: Имеется 10 электродвигателей, из которых 3 одного ти"
				L"па. Сколькими способами их \r\nможно расположить в один ряд\?";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(252, 354);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(53, 40);
			this->label15->TabIndex = 15;
			this->label15->Text = L"n = 10\r\nm = 3";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(327, 365);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(216, 20);
			this->label16->TabIndex = 16;
			this->label16->Text = L"A₁₀³ = 10!/7! = 10 * 9 * 8 = 720";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(119, 403);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(627, 32);
			this->label17->TabIndex = 18;
			this->label17->Text = L"комбинации, составленные из n различных элементов по m элементов, которые различа"
				L"ются \r\nхотя бы одним элементом. Число сочетаний определяется по формуле:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(12, 403);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(96, 16);
			this->label18->TabIndex = 17;
			this->label18->Text = L"Сочетания -";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(334, 441);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(176, 20);
			this->label19->TabIndex = 19;
			this->label19->Text = L"Cₙᵐ = n! / (m!(n - m)!)";
			this->label19->Click += gcnew System::EventHandler(this, &HelpForm::label19_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(73, 461);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(651, 32);
			this->label20->TabIndex = 20;
			this->label20->Text = L"                   Например: Сколькими способами можно составить бригаду в состав"
				L"е 3 человек, выбирая\r\n их из 8 электриков\?";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(327, 515);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(157, 20);
			this->label21->TabIndex = 22;
			this->label21->Text = L"C₈³ = 8! / (3! * 5!) = 56";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(252, 504);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(48, 40);
			this->label22->TabIndex = 21;
			this->label22->Text = L"n = 8\r\nm = 3";
			// 
			// HelpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(804, 561);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(820, 600);
			this->MinimumSize = System::Drawing::Size(820, 600);
			this->Name = L"HelpForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Справка";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_close_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
