#pragma once
#include<chrono>

namespace timer2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace std::chrono;

	/// <summary>
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label_time;
	private: System::Windows::Forms::Label^  start;
	private: System::Windows::Forms::Label^  stop;
	private: System::Windows::Forms::Button^  add_button;
	private: System::Windows::Forms::Button^  del_button;
	private: System::Windows::Forms::Label^  reset;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label_set;
	private: System::Windows::Forms::Button^  minute;
	private: System::Windows::Forms::Button^  second;
	private: System::Windows::Forms::Timer^  timer2;


	private: System::ComponentModel::IContainer^  components;





	protected:

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label_time = (gcnew System::Windows::Forms::Label());
			this->start = (gcnew System::Windows::Forms::Label());
			this->stop = (gcnew System::Windows::Forms::Label());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->del_button = (gcnew System::Windows::Forms::Button());
			this->reset = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label_set = (gcnew System::Windows::Forms::Label());
			this->minute = (gcnew System::Windows::Forms::Button());
			this->second = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::MistyRose;
			this->pictureBox1->Location = System::Drawing::Point(73, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label_time
			// 
			this->label_time->AutoSize = true;
			this->label_time->BackColor = System::Drawing::Color::MistyRose;
			this->label_time->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_time->Location = System::Drawing::Point(91, 38);
			this->label_time->Name = L"label_time";
			this->label_time->Size = System::Drawing::Size(47, 21);
			this->label_time->TabIndex = 1;
			this->label_time->Text = L"time";
			// 
			// start
			// 
			this->start->AutoSize = true;
			this->start->BackColor = System::Drawing::Color::Bisque;
			this->start->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->start->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐ明朝", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->start->Location = System::Drawing::Point(17, 94);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(84, 26);
			this->start->TabIndex = 2;
			this->start->Text = L"START";
			this->start->Click += gcnew System::EventHandler(this, &MyForm::start_Click);
			// 
			// stop
			// 
			this->stop->AutoSize = true;
			this->stop->BackColor = System::Drawing::Color::Bisque;
			this->stop->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->stop->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐ明朝", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->stop->Location = System::Drawing::Point(17, 132);
			this->stop->Name = L"stop";
			this->stop->Size = System::Drawing::Size(71, 26);
			this->stop->TabIndex = 3;
			this->stop->Text = L"STOP";
			this->stop->Click += gcnew System::EventHandler(this, &MyForm::stop_Click);
			// 
			// add_button
			// 
			this->add_button->BackColor = System::Drawing::Color::PeachPuff;
			this->add_button->Location = System::Drawing::Point(259, 216);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(75, 33);
			this->add_button->TabIndex = 4;
			this->add_button->Text = L"ADD";
			this->add_button->UseVisualStyleBackColor = false;
			this->add_button->Click += gcnew System::EventHandler(this, &MyForm::add_button_Click);
			// 
			// del_button
			// 
			this->del_button->BackColor = System::Drawing::Color::LightGreen;
			this->del_button->Location = System::Drawing::Point(340, 216);
			this->del_button->Name = L"del_button";
			this->del_button->Size = System::Drawing::Size(75, 33);
			this->del_button->TabIndex = 5;
			this->del_button->Text = L"DELETE";
			this->del_button->UseVisualStyleBackColor = false;
			this->del_button->Click += gcnew System::EventHandler(this, &MyForm::del_button_Click);
			// 
			// reset
			// 
			this->reset->AutoSize = true;
			this->reset->BackColor = System::Drawing::Color::Bisque;
			this->reset->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->reset->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐ明朝", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->reset->Location = System::Drawing::Point(17, 172);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(81, 26);
			this->reset->TabIndex = 6;
			this->reset->Text = L"RESET";
			this->reset->Click += gcnew System::EventHandler(this, &MyForm::reset_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::LightCyan;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(271, 38);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 160);
			this->listBox1->TabIndex = 7;
			// 
			// label_set
			// 
			this->label_set->AutoSize = true;
			this->label_set->BackColor = System::Drawing::Color::Bisque;
			this->label_set->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_set->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐ明朝", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label_set->Location = System::Drawing::Point(146, 94);
			this->label_set->Name = L"label_set";
			this->label_set->Size = System::Drawing::Size(53, 26);
			this->label_set->TabIndex = 8;
			this->label_set->Text = L"SET";
			this->label_set->Click += gcnew System::EventHandler(this, &MyForm::label_set_Click);
			// 
			// minute
			// 
			this->minute->BackColor = System::Drawing::Color::PeachPuff;
			this->minute->Location = System::Drawing::Point(119, 132);
			this->minute->Name = L"minute";
			this->minute->Size = System::Drawing::Size(45, 44);
			this->minute->TabIndex = 9;
			this->minute->Text = L"M(分)";
			this->minute->UseVisualStyleBackColor = false;
			this->minute->Click += gcnew System::EventHandler(this, &MyForm::minute_Click);
			// 
			// second
			// 
			this->second->BackColor = System::Drawing::Color::PeachPuff;
			this->second->Location = System::Drawing::Point(181, 132);
			this->second->Name = L"second";
			this->second->Size = System::Drawing::Size(45, 44);
			this->second->TabIndex = 10;
			this->second->Text = L"S(秒)";
			this->second->UseVisualStyleBackColor = false;
			this->second->Click += gcnew System::EventHandler(this, &MyForm::second_Click);
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(427, 261);
			this->Controls->Add(this->second);
			this->Controls->Add(this->minute);
			this->Controls->Add(this->label_set);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->del_button);
			this->Controls->Add(this->add_button);
			this->Controls->Add(this->stop);
			this->Controls->Add(this->start);
			this->Controls->Add(this->label_time);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double time;
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		time = 0;
		label_time->Text = time.ToString("F");
	}
private: System::Void start_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Enabled = true;
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	time += 0.01;
	label_time->Text = time.ToString("F");
}
private: System::Void stop_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Enabled = false;
	timer2->Enabled = false;
}
private: System::Void reset_Click(System::Object^  sender, System::EventArgs^  e) {
	time = 0;
	label_time->Text = time.ToString("F");
}
private: System::Void add_button_Click(System::Object^  sender, System::EventArgs^  e) {
	listBox1->Items->Add(label_time->Text);
}
private: System::Void del_button_Click(System::Object^  sender, System::EventArgs^  e) {
	if (listBox1->SelectedItems->Count == 0) {
		listBox1->Items->Clear();
	}
	else {
		int del_temp = listBox1->Items->IndexOf(listBox1->SelectedItem);
		listBox1->Items->RemoveAt(del_temp);
	}
}
private: System::Void minute_Click(System::Object^  sender, System::EventArgs^  e) {
	time += 60;
	label_time->Text = time.ToString("F");

}
private: System::Void second_Click(System::Object^  sender, System::EventArgs^  e) {
	time += 1;
	label_time->Text = time.ToString("F");
}
private: System::Void label_set_Click(System::Object^  sender, System::EventArgs^  e) {
	timer2->Enabled = true;
}

private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
	time -= 0.01;
	label_time->Text = time.ToString("F");
}
		 
};
}
