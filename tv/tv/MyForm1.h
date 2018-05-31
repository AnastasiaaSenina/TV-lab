//Copyrigt  Anastasia Senina
#pragma once
#include "Generation.h"
#include "algorithm"
namespace tv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	using namespace Runtime::InteropServices;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms::DataVisualization::Charting;


	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;


  private: System::Windows::Forms::RichTextBox^  richTextBox1;
  private: System::Windows::Forms::TextBox^  textBox4;
  private: System::Windows::Forms::Label^  label5;
  private: System::Windows::Forms::TextBox^  textBox5;
  private: System::Windows::Forms::Label^  label6;
  private: System::Windows::Forms::Label^  label7;
  private: System::Windows::Forms::DataGridView^  dataGridView3;
  private: System::Windows::Forms::TextBox^  textBox6;
  private: System::Windows::Forms::Label^  label8;










	private:



	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
      System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
      System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
      System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
      System::Windows::Forms::DataVisualization::Charting::Series^  series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
      System::Windows::Forms::DataVisualization::Charting::Series^  series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
      System::Windows::Forms::DataVisualization::Charting::Series^  series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
      System::Windows::Forms::DataVisualization::Charting::Series^  series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
      System::Windows::Forms::DataVisualization::Charting::Series^  series15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
      System::Windows::Forms::DataVisualization::Charting::Series^  series16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
      System::Windows::Forms::DataVisualization::Charting::Series^  series17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
      System::Windows::Forms::DataVisualization::Charting::Series^  series18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
      System::Windows::Forms::DataVisualization::Charting::Series^  series19 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
      System::Windows::Forms::DataVisualization::Charting::Series^  series20 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
      this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
      this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->button1 = (gcnew System::Windows::Forms::Button());
      this->label1 = (gcnew System::Windows::Forms::Label());
      this->textBox1 = (gcnew System::Windows::Forms::TextBox());
      this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
      this->label2 = (gcnew System::Windows::Forms::Label());
      this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
      this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
      this->label3 = (gcnew System::Windows::Forms::Label());
      this->textBox2 = (gcnew System::Windows::Forms::TextBox());
      this->textBox3 = (gcnew System::Windows::Forms::TextBox());
      this->label4 = (gcnew System::Windows::Forms::Label());
      this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
      this->textBox4 = (gcnew System::Windows::Forms::TextBox());
      this->label5 = (gcnew System::Windows::Forms::Label());
      this->textBox5 = (gcnew System::Windows::Forms::TextBox());
      this->label6 = (gcnew System::Windows::Forms::Label());
      this->label7 = (gcnew System::Windows::Forms::Label());
      this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
      this->textBox6 = (gcnew System::Windows::Forms::TextBox());
      this->label8 = (gcnew System::Windows::Forms::Label());
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
      this->SuspendLayout();
      // 
      // dataGridView2
      // 
      this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
      this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
        this->Column1,
          this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
      });
      this->dataGridView2->Location = System::Drawing::Point(12, 350);
      this->dataGridView2->Name = L"dataGridView2";
      this->dataGridView2->Size = System::Drawing::Size(603, 60);
      this->dataGridView2->TabIndex = 0;
      // 
      // Column1
      // 
      this->Column1->HeaderText = L"En";
      this->Column1->Name = L"Column1";
      this->Column1->Width = 70;
      // 
      // Column2
      // 
      this->Column2->HeaderText = L"Xср";
      this->Column2->Name = L"Column2";
      this->Column2->Width = 70;
      // 
      // Column3
      // 
      this->Column3->HeaderText = L"|En-Xср|";
      this->Column3->Name = L"Column3";
      this->Column3->Width = 70;
      // 
      // Column4
      // 
      this->Column4->HeaderText = L"Dn";
      this->Column4->Name = L"Column4";
      this->Column4->Width = 70;
      // 
      // Column5
      // 
      this->Column5->HeaderText = L"S2";
      this->Column5->Name = L"Column5";
      this->Column5->Width = 70;
      // 
      // Column6
      // 
      this->Column6->HeaderText = L"|Dn-S2|";
      this->Column6->Name = L"Column6";
      this->Column6->Width = 70;
      // 
      // Column7
      // 
      this->Column7->HeaderText = L"Me";
      this->Column7->Name = L"Column7";
      this->Column7->Width = 70;
      // 
      // Column8
      // 
      this->Column8->HeaderText = L"R";
      this->Column8->Name = L"Column8";
      this->Column8->Width = 70;
      // 
      // button1
      // 
      this->button1->Location = System::Drawing::Point(233, 146);
      this->button1->Name = L"button1";
      this->button1->Size = System::Drawing::Size(58, 23);
      this->button1->TabIndex = 1;
      this->button1->Text = L"play";
      this->button1->UseVisualStyleBackColor = true;
      this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
      // 
      // label1
      // 
      this->label1->AutoSize = true;
      this->label1->Location = System::Drawing::Point(9, 154);
      this->label1->Name = L"label1";
      this->label1->Size = System::Drawing::Size(37, 15);
      this->label1->TabIndex = 2;
      this->label1->Text = L"count";
      // 
      // textBox1
      // 
      this->textBox1->Location = System::Drawing::Point(132, 149);
      this->textBox1->Name = L"textBox1";
      this->textBox1->Size = System::Drawing::Size(69, 20);
      this->textBox1->TabIndex = 3;
      // 
      // pictureBox1
      // 
      this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
      this->pictureBox1->Location = System::Drawing::Point(12, 57);
      this->pictureBox1->Name = L"pictureBox1";
      this->pictureBox1->Size = System::Drawing::Size(618, 69);
      this->pictureBox1->TabIndex = 4;
      this->pictureBox1->TabStop = false;
      // 
      // label2
      // 
      this->label2->AutoSize = true;
      this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
      this->label2->Location = System::Drawing::Point(6, 9);
      this->label2->Name = L"label2";
      this->label2->Size = System::Drawing::Size(106, 31);
      this->label2->TabIndex = 5;
      this->label2->Text = L"Задача";
      // 
      // chart1
      // 
      chartArea2->Name = L"ChartArea1";
      this->chart1->ChartAreas->Add(chartArea2);
      legend2->Name = L"Legend1";
      this->chart1->Legends->Add(legend2);
      this->chart1->Location = System::Drawing::Point(653, 57);
      this->chart1->Name = L"chart1";
      this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
      this->chart1->PaletteCustomColors = gcnew cli::array< System::Drawing::Color >(1) { System::Drawing::Color::Blue };
      series11->ChartArea = L"ChartArea1";
      series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
      series11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
      series11->Legend = L"Legend1";
      series11->MarkerBorderColor = System::Drawing::Color::Blue;
      series11->MarkerBorderWidth = 5;
      series11->MarkerColor = System::Drawing::Color::Blue;
      series11->MarkerSize = 10;
      series11->Name = L"Series1";
      series11->YValuesPerPoint = 2;
      series12->ChartArea = L"ChartArea1";
      series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
      series12->Legend = L"Legend1";
      series12->MarkerBorderColor = System::Drawing::Color::Blue;
      series12->MarkerBorderWidth = 5;
      series12->MarkerColor = System::Drawing::Color::Blue;
      series12->MarkerSize = 10;
      series12->Name = L"Series2";
      series13->ChartArea = L"ChartArea1";
      series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
      series13->Legend = L"Legend1";
      series13->MarkerBorderColor = System::Drawing::Color::Blue;
      series13->MarkerBorderWidth = 5;
      series13->MarkerColor = System::Drawing::Color::Blue;
      series13->MarkerSize = 10;
      series13->Name = L"Series3";
      series14->ChartArea = L"ChartArea1";
      series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
      series14->Legend = L"Legend1";
      series14->MarkerBorderColor = System::Drawing::Color::Blue;
      series14->MarkerBorderWidth = 5;
      series14->MarkerColor = System::Drawing::Color::Blue;
      series14->MarkerSize = 10;
      series14->Name = L"Series4";
      series15->ChartArea = L"ChartArea1";
      series15->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
      series15->Legend = L"Legend1";
      series15->MarkerBorderColor = System::Drawing::Color::Blue;
      series15->MarkerBorderWidth = 5;
      series15->MarkerColor = System::Drawing::Color::Blue;
      series15->MarkerSize = 10;
      series15->Name = L"Series5";
      series16->ChartArea = L"ChartArea1";
      series16->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
      series16->Legend = L"Legend1";
      series16->Name = L"Series6";
      series17->ChartArea = L"ChartArea1";
      series17->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
      series17->Legend = L"Legend1";
      series17->Name = L"Series7";
      series18->ChartArea = L"ChartArea1";
      series18->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
      series18->Legend = L"Legend1";
      series18->Name = L"Series8";
      series19->ChartArea = L"ChartArea1";
      series19->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
      series19->Legend = L"Legend1";
      series19->Name = L"Series9";
      series20->ChartArea = L"ChartArea1";
      series20->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
      series20->Legend = L"Legend1";
      series20->Name = L"Series10";
      this->chart1->Series->Add(series11);
      this->chart1->Series->Add(series12);
      this->chart1->Series->Add(series13);
      this->chart1->Series->Add(series14);
      this->chart1->Series->Add(series15);
      this->chart1->Series->Add(series16);
      this->chart1->Series->Add(series17);
      this->chart1->Series->Add(series18);
      this->chart1->Series->Add(series19);
      this->chart1->Series->Add(series20);
      this->chart1->Size = System::Drawing::Size(575, 470);
      this->chart1->TabIndex = 10;
      this->chart1->Text = L"chart1";
      // 
      // dataGridView1
      // 
      this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
      this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView1->Location = System::Drawing::Point(12, 185);
      this->dataGridView1->Name = L"dataGridView1";
      this->dataGridView1->Size = System::Drawing::Size(464, 117);
      this->dataGridView1->TabIndex = 11;
      this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm1::dataGridView2_CellContentClick);
      // 
      // label3
      // 
      this->label3->AutoSize = true;
      this->label3->Location = System::Drawing::Point(9, 313);
      this->label3->Name = L"label3";
      this->label3->Size = System::Drawing::Size(114, 15);
      this->label3->TabIndex = 12;
      this->label3->Text = L"max | { nj/n - P(yj) } |";
      // 
      // textBox2
      // 
      this->textBox2->Location = System::Drawing::Point(132, 313);
      this->textBox2->Name = L"textBox2";
      this->textBox2->Size = System::Drawing::Size(69, 20);
      this->textBox2->TabIndex = 13;
      // 
      // textBox3
      // 
      this->textBox3->Location = System::Drawing::Point(833, 559);
      this->textBox3->Name = L"textBox3";
      this->textBox3->Size = System::Drawing::Size(69, 20);
      this->textBox3->TabIndex = 15;
      // 
      // label4
      // 
      this->label4->AutoSize = true;
      this->label4->Location = System::Drawing::Point(636, 549);
      this->label4->Name = L"label4";
      this->label4->Size = System::Drawing::Size(152, 30);
      this->label4->TabIndex = 14;
      this->label4->Text = L"Максимальная разность\r\n значений графика";
      this->label4->Click += gcnew System::EventHandler(this, &MyForm1::label4_Click);
      // 
      // richTextBox1
      // 
      this->richTextBox1->Location = System::Drawing::Point(12, 427);
      this->richTextBox1->Name = L"richTextBox1";
      this->richTextBox1->Size = System::Drawing::Size(258, 81);
      this->richTextBox1->TabIndex = 18;
      this->richTextBox1->Text = L"";
      // 
      // textBox4
      // 
      this->textBox4->Location = System::Drawing::Point(71, 509);
      this->textBox4->Name = L"textBox4";
      this->textBox4->Size = System::Drawing::Size(72, 20);
      this->textBox4->TabIndex = 19;
      // 
      // label5
      // 
      this->label5->AutoSize = true;
      this->label5->Location = System::Drawing::Point(9, 512);
      this->label5->Name = L"label5";
      this->label5->Size = System::Drawing::Size(38, 15);
      this->label5->TabIndex = 20;
      this->label5->Text = L"alpha";
      // 
      // textBox5
      // 
      this->textBox5->Location = System::Drawing::Point(71, 535);
      this->textBox5->Name = L"textBox5";
      this->textBox5->Size = System::Drawing::Size(72, 20);
      this->textBox5->TabIndex = 21;
      // 
      // label6
      // 
      this->label6->AutoSize = true;
      this->label6->Location = System::Drawing::Point(8, 540);
      this->label6->Name = L"label6";
      this->label6->Size = System::Drawing::Size(45, 15);
      this->label6->TabIndex = 22;
      this->label6->Text = L"F_(R0)";
      // 
      // label7
      // 
      this->label7->AutoSize = true;
      this->label7->Location = System::Drawing::Point(347, 535);
      this->label7->Name = L"label7";
      this->label7->Size = System::Drawing::Size(248, 15);
      this->label7->TabIndex = 23;
      this->label7->Text = L"подтверждение или отрицание гипотезы";
      // 
      // dataGridView3
      // 
      this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView3->Location = System::Drawing::Point(276, 427);
      this->dataGridView3->Name = L"dataGridView3";
      this->dataGridView3->Size = System::Drawing::Size(354, 81);
      this->dataGridView3->TabIndex = 24;
      // 
      // textBox6
      // 
      this->textBox6->Location = System::Drawing::Point(71, 561);
      this->textBox6->Name = L"textBox6";
      this->textBox6->Size = System::Drawing::Size(72, 20);
      this->textBox6->TabIndex = 25;
      // 
      // label8
      // 
      this->label8->AutoSize = true;
      this->label8->Location = System::Drawing::Point(9, 566);
      this->label8->Name = L"label8";
      this->label8->Size = System::Drawing::Size(23, 15);
      this->label8->TabIndex = 26;
      this->label8->Text = L"R0";
      // 
      // MyForm1
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(1226, 588);
      this->Controls->Add(this->label8);
      this->Controls->Add(this->textBox6);
      this->Controls->Add(this->dataGridView3);
      this->Controls->Add(this->label7);
      this->Controls->Add(this->label6);
      this->Controls->Add(this->textBox5);
      this->Controls->Add(this->label5);
      this->Controls->Add(this->textBox4);
      this->Controls->Add(this->richTextBox1);
      this->Controls->Add(this->textBox3);
      this->Controls->Add(this->label4);
      this->Controls->Add(this->textBox2);
      this->Controls->Add(this->label3);
      this->Controls->Add(this->dataGridView1);
      this->Controls->Add(this->chart1);
      this->Controls->Add(this->label2);
      this->Controls->Add(this->pictureBox1);
      this->Controls->Add(this->textBox1);
      this->Controls->Add(this->label1);
      this->Controls->Add(this->button1);
      this->Controls->Add(this->dataGridView2);
      this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.45F));
      this->Name = L"MyForm1";
      this->Text = L"MyForm1";
      this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
      this->ResumeLayout(false);
      this->PerformLayout();

    }
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		int m = System::Int32::Parse(textBox1->Text);
		Generation a(m);
		a.Method();
		dataGridView1->ColumnCount = 4;
		dataGridView1->RowCount = 4;
		dataGridView1->Rows[0]->HeaderCell->Value = "yi";
		dataGridView1->Rows[1]->HeaderCell->Value = "P(yi)";
		dataGridView1->Rows[2]->HeaderCell->Value = "ni";
		dataGridView1->Rows[3]->HeaderCell->Value = "ni/n";
		for (int j = 0; j < 4; ++j) {
			dataGridView1->Rows[0]->Cells[j]->Value = j;
		}
		dataGridView1->Rows[1]->Cells[0]->Value = 12.0 / 36;
		dataGridView1->Rows[1]->Cells[1]->Value = 16.0/36;
		dataGridView1->Rows[1]->Cells[2]->Value = 7.0/36;
		dataGridView1->Rows[1]->Cells[3]->Value = 1.0 / 36;
		vector< double> Pj;
		Pj.push_back(12.0 / 36);
		Pj.push_back(16.0 / 36);
		Pj.push_back(7.0 / 36);
		Pj.push_back(1.0 / 36);

		double max1 = abs(12.0 / 36 - (double)a.Getnj(0) / m);
		for (int j = 0; j < 4; ++j) {
			dataGridView1->Rows[2]->Cells[j]->Value = a.Getnj(j);
			dataGridView1->Rows[3]->Cells[j]->Value = (double)a.Getnj(j) / m;
			if (abs(Pj[j] - (double)a.Getnj(j) / m) > max1) max1 = abs(Pj[j] - (double)a.Getnj(j) / m);
		}
		textBox2->Text = Convert::ToString(max1);
		////////paint//////////////////////////
		for(int i = 0; i<10; ++i) {
			chart1->Series[i]->Points->Clear();
		}		
		
		chart1->ChartAreas[0]->AxisX->Minimum = -1;
		chart1->ChartAreas[0]->AxisX->Maximum = 4;
		chart1->ChartAreas[0]->AxisY->Minimum = 0;
		chart1->ChartAreas[0]->AxisY->Maximum = 1.2;

		double Step = 0.1;
		chart1->ChartAreas[0]->AxisX->MajorGrid->Interval = 0.5;
		chart1->ChartAreas[0]->AxisY->MajorGrid->Interval = 0.5;

		chart1->ChartAreas[0]->AxisX->MajorGrid->Enabled = true;
		chart1->ChartAreas[0]->AxisY->MajorGrid->Enabled = true;

		

		int count = 5 / 0.001;
		chart1->Series[0]->Color = System::Drawing::Color::Blue;
		chart1->Series[1]->Color = System::Drawing::Color::Blue;
		chart1->Series[2]->Color = System::Drawing::Color::Blue;
		chart1->Series[3]->Color = System::Drawing::Color::Blue;
		chart1->Series[4]->Color = System::Drawing::Color::Blue;
		for (int i = 0; i < count; ++i) {			
			double x = -1 + 0.001*i;
			if( x <0) chart1->Series[0]->Points->AddXY(x, 0);
			if (x >=0 && x<1) chart1->Series[1]->Points->AddXY(x, 12.0/36.0);
			if (x>=1 && x<2) chart1->Series[2]->Points->AddXY(x,28.0/36.0 );
			if (x >= 2 && x<3) chart1->Series[3]->Points->AddXY(x, 35.0 / 36.0);
			if (x >= 3 && x<4) chart1->Series[4]->Points->AddXY(x, 1);

		}
		vector<double> F;
		F.push_back(abs(12.0 / 36.0 - (double)a.Getnj(0) / m));
		F.push_back(abs(28.0 / 36.0 - (double)(a.Getnj(0) + a.Getnj(1)) / m));
		F.push_back(abs(35.0 / 36.0 - (double)(a.Getnj(0) + a.Getnj(1) + a.Getnj(2)) / m));
		double m1 = std::max(F[0], F[1]);
		double max2 = std::max(m1, F[2]);
		textBox3->Text = Convert::ToString(max2);
		chart1->Series[5]->Color = System::Drawing::Color::Red;
		chart1->Series[6]->Color = System::Drawing::Color::Red;
		chart1->Series[7]->Color = System::Drawing::Color::Red;
		chart1->Series[8]->Color = System::Drawing::Color::Red;
		chart1->Series[9]->Color = System::Drawing::Color::Red;
		for (int i = 0; i < count; ++i) {
			double x = -1 + 0.001*i;
			if (x <0) chart1->Series[5]->Points->AddXY(x, 0);
			if (x >= 0 && x<1) chart1->Series[6]->Points->AddXY(x, (double)a.Getnj(0) / m);
			if (x >= 1 && x<2) chart1->Series[7]->Points->AddXY(x, (double)(a.Getnj(0) + a.Getnj(1)) / m);
			if (x >= 2 && x<3) chart1->Series[8]->Points->AddXY(x, (double)(a.Getnj(0) + a.Getnj(1) + a.Getnj(2)) / m);
			if (x >= 3 && x<4) chart1->Series[9]->Points->AddXY(x, 1);

		}
		///////////////////////////////////////заполнение таблицы числ характеристик
		dataGridView2->RowCount = 1;
		double r = 33.0 / 36;
		dataGridView2->Rows[0]->Cells[0]->Value = r;
		dataGridView2->Rows[0]->Cells[1]->Value = a.GetXsr();
		dataGridView2->Rows[0]->Cells[2]->Value = abs(r - a.GetXsr());
		dataGridView2->Rows[0]->Cells[3]->Value = 819. / 1296;
		dataGridView2->Rows[0]->Cells[4]->Value = a.GetS2();
		double s = 819.0 / 1296;
		dataGridView2->Rows[0]->Cells[5]->Value = abs(s-a.GetS2());
		dataGridView2->Rows[0]->Cells[6]->Value = a.GetMe();
		dataGridView2->Rows[0]->Cells[7]->Value = a.GetR();
 /////// part 3
    List<double>^ intervals = gcnew List<double>();
    char* ab = new char[richTextBox1->Text->Length + 1];
    int k = 0;

    for(int i = 0; i<richTextBox1->Text->Length;i++)
    {
      char a = richTextBox1->Text[i];
      if ((a <= '9' && a >= '0') || a == ',')
      {
         ab[k] = a;
         k++;
      }
      else
      {
        if (a == ';')
        {
          ab[k] = '\0';
          k = 0;
          double o;
          Double::TryParse(gcnew String(ab),o);
          intervals->Add(o);
        }
      }
    }
    ab[k] = '\0';
    k = 0;
    double o;
    Double::TryParse(gcnew String(ab), o);
    intervals->Add(o);
    intervals->Add(-1);
    intervals->Add(4);
    intervals->Sort();
    a.K = intervals->Count - 1;
    double* qj = new double[intervals->Count - 1];
    for (int i = 0; i < intervals->Count - 1; ++i)
      qj[i] = 0;

    int* nj = new int[intervals->Count - 1];
    for (int i = 0; i < intervals->Count - 1; ++i)
      nj[i] = 0;
    for (int i = 0; i < intervals->Count-1; ++i) {
      if (intervals[i] < 0 && intervals[i + 1] > 0) { qj[i] += 12.0 / 36.0; nj[i] += a.Getnj(i); }
      if (intervals[i] < 1 && intervals[i + 1] > 1) { qj[i] += 16.0 / 36.0; nj[i] += a.Getnj(i); }
      if (intervals[i] < 2 && intervals[i + 1] > 2) { qj[i] += 7.0 / 36.0; nj[i] += a.Getnj(i); }
      if (intervals[i] < 3 && intervals[i + 1] > 3) { qj[i] += 1.0 / 36.0; nj[i] += a.Getnj(i); }
    }
    dataGridView3->RowCount = 2;
    dataGridView3->ColumnCount = intervals->Count - 1;
    for (auto i = 0; i < intervals->Count - 1; ++i) {
      dataGridView3->Rows[0]->Cells[i]->Value = i;
      dataGridView3->Rows[1]->Cells[i]->Value = qj[i];
    }
    double R0 = 0;
    for (int i = 0; i < intervals->Count - 1; ++i) { // подсчет значения R0
      R0 += (nj[i] -m*qj[i])*(nj[i] - m*qj[i]) / (m* qj[i]);
    }
    textBox6->Text = Convert::ToString(R0);
    double F_ = a.Calc_F(R0); // вычисление значения функции распр 
    textBox5->Text = Convert::ToString(F_);
    double alpha = System::Double::Parse(textBox4->Text);
    if (F_ < alpha) label7->Text = Convert::ToString("Гипотеза отвержена");// принятие решения о гипотезы
    else label7->Text = Convert::ToString("Гипотеза подтвержена");
	}
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
