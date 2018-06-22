#pragma once

namespace ImagerRobot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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

	protected:

	private: System::Windows::Forms::PictureBox^  ImageDisplay;
	private: System::Windows::Forms::Label^  ImageName;
	private: System::Windows::Forms::TrackBar^  BrightnessSlider;
	private: System::Windows::Forms::Label^  BrightnessLabel;
	private: System::Windows::Forms::Label^  Brightness0;
	private: System::Windows::Forms::Label^  Brightness100;
	private: System::Windows::Forms::Label^  Contrast100;
	private: System::Windows::Forms::Label^  Contrast0;
	private: System::Windows::Forms::Label^  ContrastLabel;
	private: System::Windows::Forms::TrackBar^  ContrastSlider;
	private: System::Windows::Forms::GroupBox^  ImagerBox;
	private: System::Windows::Forms::GroupBox^  EluterBox;
	private: System::Windows::Forms::Button^  NextButton;
	private: System::Windows::Forms::Button^  PrevButton;
	private: System::Windows::Forms::Label^  TipLabel;
	private: System::Windows::Forms::Button^  LoadButton;
	private: System::Windows::Forms::GroupBox^  AdvancedBox;
	private: System::Windows::Forms::ComboBox^  TipColBox;
	private: System::Windows::Forms::ComboBox^  TipRowBox;
	private: System::Windows::Forms::Label^  SpotsLabel;
	private: System::Windows::Forms::ListBox^  SpotBox;
	private: System::Windows::Forms::Label^  VoltageBoxLabel;
	private: System::Windows::Forms::Label^  CurrentBoxLabel;
	private: System::Windows::Forms::Label^  ElutionTimeLabel;



	private: System::Windows::Forms::Button^  ImageCutAreaButton;
	private: System::Windows::Forms::Button^  StopElutionButton;
	private: System::Windows::Forms::Button^  EluteSpotsButton;
	private: System::Windows::Forms::Button^  RemoveSpotsButton;
	private: System::Windows::Forms::Button^  SelectSpotsButton;
	private: System::Windows::Forms::GroupBox^  ScalingBox;
	private: System::Windows::Forms::Button^  ApplyButton;
	private: System::Windows::Forms::Label^  MaxEnterLabel;
	private: System::Windows::Forms::Label^  MinEnterLabel;
	private: System::Windows::Forms::RichTextBox^  MaxEnter;
	private: System::Windows::Forms::RichTextBox^  MinEnter;
	private: System::Windows::Forms::Label^  MinMaxDisplay;
	private: System::Windows::Forms::Label^  ElutionTimeBox;
	private: System::Windows::Forms::Label^  CurrentBox;
	private: System::Windows::Forms::Label^  VoltageBox;
	private: System::Windows::Forms::RichTextBox^  Cy2ExposureEnter;



	private: System::Windows::Forms::Label^  ExposureLabel;
	private: System::Windows::Forms::CheckBox^  Cy5Select;
	private: System::Windows::Forms::CheckBox^  Cy3Select;
	private: System::Windows::Forms::CheckBox^  Cy2Select;
	private: System::Windows::Forms::Label^  ImageBoxLabel;
	private: System::Windows::Forms::ListBox^  ImageBox;
	private: System::Windows::Forms::Button^  AcquireImageButton;

	private: System::Windows::Forms::PictureBox^  Zoom;

	private: System::Windows::Forms::Label^  Zoom0;
	private: System::Windows::Forms::Label^  ZoomX2048;
	private: System::Windows::Forms::Label^  ZoomY2048;
	private: System::Windows::Forms::Label^  ZoomY;
	private: System::Windows::Forms::Label^  ZoomX;
	private: System::Windows::Forms::Label^  CurrentZoomDisplay;
	private: System::Windows::Forms::GroupBox^  CurrentZoomBox;
	private: System::Windows::Forms::GroupBox^  NewZoomBox;
	private: System::Windows::Forms::Label^  SideLengthLabel;
	private: System::Windows::Forms::Label^  NewCenterLabel;
	private: System::Windows::Forms::RichTextBox^  CenterXEnter;
	private: System::Windows::Forms::RichTextBox^  CenterYEnter;
	private: System::Windows::Forms::RichTextBox^  SideLengthEnter;

	private: System::Windows::Forms::Button^  ResetZoomButton;
	private: System::Windows::Forms::Button^  ApplyZoomButton;
	private: System::Windows::Forms::PictureBox^  CurrentZoom;

	private: System::Windows::Forms::RichTextBox^  Cy3ExposureEnter;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  RemoveImageButton;
	private: System::Windows::Forms::Button^  SaveImageButton;
	private: System::Windows::Forms::CheckBox^  DisplaySpotsSelect;













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
			this->SpotBox = (gcnew System::Windows::Forms::ListBox());
			this->ImageDisplay = (gcnew System::Windows::Forms::PictureBox());
			this->ImageName = (gcnew System::Windows::Forms::Label());
			this->BrightnessSlider = (gcnew System::Windows::Forms::TrackBar());
			this->BrightnessLabel = (gcnew System::Windows::Forms::Label());
			this->Brightness0 = (gcnew System::Windows::Forms::Label());
			this->Brightness100 = (gcnew System::Windows::Forms::Label());
			this->Contrast100 = (gcnew System::Windows::Forms::Label());
			this->Contrast0 = (gcnew System::Windows::Forms::Label());
			this->ContrastLabel = (gcnew System::Windows::Forms::Label());
			this->ContrastSlider = (gcnew System::Windows::Forms::TrackBar());
			this->ImagerBox = (gcnew System::Windows::Forms::GroupBox());
			this->RemoveImageButton = (gcnew System::Windows::Forms::Button());
			this->SaveImageButton = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Cy3ExposureEnter = (gcnew System::Windows::Forms::RichTextBox());
			this->ImageBoxLabel = (gcnew System::Windows::Forms::Label());
			this->ImageBox = (gcnew System::Windows::Forms::ListBox());
			this->Cy5Select = (gcnew System::Windows::Forms::CheckBox());
			this->Cy3Select = (gcnew System::Windows::Forms::CheckBox());
			this->Cy2Select = (gcnew System::Windows::Forms::CheckBox());
			this->Cy2ExposureEnter = (gcnew System::Windows::Forms::RichTextBox());
			this->ExposureLabel = (gcnew System::Windows::Forms::Label());
			this->ScalingBox = (gcnew System::Windows::Forms::GroupBox());
			this->ApplyButton = (gcnew System::Windows::Forms::Button());
			this->MaxEnterLabel = (gcnew System::Windows::Forms::Label());
			this->MinEnterLabel = (gcnew System::Windows::Forms::Label());
			this->MaxEnter = (gcnew System::Windows::Forms::RichTextBox());
			this->MinEnter = (gcnew System::Windows::Forms::RichTextBox());
			this->MinMaxDisplay = (gcnew System::Windows::Forms::Label());
			this->AcquireImageButton = (gcnew System::Windows::Forms::Button());
			this->EluterBox = (gcnew System::Windows::Forms::GroupBox());
			this->DisplaySpotsSelect = (gcnew System::Windows::Forms::CheckBox());
			this->ElutionTimeBox = (gcnew System::Windows::Forms::Label());
			this->CurrentBox = (gcnew System::Windows::Forms::Label());
			this->VoltageBox = (gcnew System::Windows::Forms::Label());
			this->VoltageBoxLabel = (gcnew System::Windows::Forms::Label());
			this->CurrentBoxLabel = (gcnew System::Windows::Forms::Label());
			this->ElutionTimeLabel = (gcnew System::Windows::Forms::Label());
			this->ImageCutAreaButton = (gcnew System::Windows::Forms::Button());
			this->StopElutionButton = (gcnew System::Windows::Forms::Button());
			this->EluteSpotsButton = (gcnew System::Windows::Forms::Button());
			this->RemoveSpotsButton = (gcnew System::Windows::Forms::Button());
			this->SelectSpotsButton = (gcnew System::Windows::Forms::Button());
			this->SpotsLabel = (gcnew System::Windows::Forms::Label());
			this->TipColBox = (gcnew System::Windows::Forms::ComboBox());
			this->TipRowBox = (gcnew System::Windows::Forms::ComboBox());
			this->NextButton = (gcnew System::Windows::Forms::Button());
			this->PrevButton = (gcnew System::Windows::Forms::Button());
			this->TipLabel = (gcnew System::Windows::Forms::Label());
			this->LoadButton = (gcnew System::Windows::Forms::Button());
			this->AdvancedBox = (gcnew System::Windows::Forms::GroupBox());
			this->Zoom = (gcnew System::Windows::Forms::PictureBox());
			this->Zoom0 = (gcnew System::Windows::Forms::Label());
			this->ZoomX2048 = (gcnew System::Windows::Forms::Label());
			this->ZoomY2048 = (gcnew System::Windows::Forms::Label());
			this->ZoomY = (gcnew System::Windows::Forms::Label());
			this->ZoomX = (gcnew System::Windows::Forms::Label());
			this->CurrentZoomDisplay = (gcnew System::Windows::Forms::Label());
			this->CurrentZoomBox = (gcnew System::Windows::Forms::GroupBox());
			this->NewZoomBox = (gcnew System::Windows::Forms::GroupBox());
			this->ResetZoomButton = (gcnew System::Windows::Forms::Button());
			this->ApplyZoomButton = (gcnew System::Windows::Forms::Button());
			this->SideLengthEnter = (gcnew System::Windows::Forms::RichTextBox());
			this->CenterYEnter = (gcnew System::Windows::Forms::RichTextBox());
			this->CenterXEnter = (gcnew System::Windows::Forms::RichTextBox());
			this->SideLengthLabel = (gcnew System::Windows::Forms::Label());
			this->NewCenterLabel = (gcnew System::Windows::Forms::Label());
			this->CurrentZoom = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImageDisplay))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrightnessSlider))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ContrastSlider))->BeginInit();
			this->ImagerBox->SuspendLayout();
			this->ScalingBox->SuspendLayout();
			this->EluterBox->SuspendLayout();
			this->AdvancedBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Zoom))->BeginInit();
			this->NewZoomBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CurrentZoom))->BeginInit();
			this->SuspendLayout();
			// 
			// SpotBox
			// 
			this->SpotBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->SpotBox->FormattingEnabled = true;
			this->SpotBox->Location = System::Drawing::Point(10, 98);
			this->SpotBox->Name = L"SpotBox";
			this->SpotBox->ScrollAlwaysVisible = true;
			this->SpotBox->Size = System::Drawing::Size(75, 251);
			this->SpotBox->TabIndex = 6;
			// 
			// ImageDisplay
			// 
			this->ImageDisplay->BackColor = System::Drawing::Color::Black;
			this->ImageDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ImageDisplay->Cursor = System::Windows::Forms::Cursors::Cross;
			this->ImageDisplay->Location = System::Drawing::Point(586, 29);
			this->ImageDisplay->Name = L"ImageDisplay";
			this->ImageDisplay->Size = System::Drawing::Size(750, 750);
			this->ImageDisplay->TabIndex = 2;
			this->ImageDisplay->TabStop = false;
			// 
			// ImageName
			// 
			this->ImageName->BackColor = System::Drawing::Color::Transparent;
			this->ImageName->Cursor = System::Windows::Forms::Cursors::Default;
			this->ImageName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ImageName->Location = System::Drawing::Point(586, 2);
			this->ImageName->Name = L"ImageName";
			this->ImageName->Size = System::Drawing::Size(750, 20);
			this->ImageName->TabIndex = 3;
			this->ImageName->Text = L"[ Image Name ] ";
			this->ImageName->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// BrightnessSlider
			// 
			this->BrightnessSlider->AutoSize = false;
			this->BrightnessSlider->BackColor = System::Drawing::Color::White;
			this->BrightnessSlider->Cursor = System::Windows::Forms::Cursors::Default;
			this->BrightnessSlider->Location = System::Drawing::Point(586, 795);
			this->BrightnessSlider->Maximum = 100;
			this->BrightnessSlider->Name = L"BrightnessSlider";
			this->BrightnessSlider->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->BrightnessSlider->Size = System::Drawing::Size(360, 45);
			this->BrightnessSlider->TabIndex = 4;
			this->BrightnessSlider->Value = 50;
			// 
			// BrightnessLabel
			// 
			this->BrightnessLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->BrightnessLabel->BackColor = System::Drawing::Color::Transparent;
			this->BrightnessLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->BrightnessLabel->Location = System::Drawing::Point(586, 780);
			this->BrightnessLabel->Name = L"BrightnessLabel";
			this->BrightnessLabel->Size = System::Drawing::Size(360, 15);
			this->BrightnessLabel->TabIndex = 5;
			this->BrightnessLabel->Text = L"Brightness";
			this->BrightnessLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Brightness0
			// 
			this->Brightness0->AutoSize = true;
			this->Brightness0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->Brightness0->Location = System::Drawing::Point(594, 820);
			this->Brightness0->Name = L"Brightness0";
			this->Brightness0->Size = System::Drawing::Size(13, 13);
			this->Brightness0->TabIndex = 6;
			this->Brightness0->Text = L"0";
			// 
			// Brightness100
			// 
			this->Brightness100->AutoSize = true;
			this->Brightness100->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->Brightness100->Location = System::Drawing::Point(921, 820);
			this->Brightness100->Name = L"Brightness100";
			this->Brightness100->Size = System::Drawing::Size(25, 13);
			this->Brightness100->TabIndex = 7;
			this->Brightness100->Text = L"100";
			// 
			// Contrast100
			// 
			this->Contrast100->AutoSize = true;
			this->Contrast100->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->Contrast100->Location = System::Drawing::Point(1311, 820);
			this->Contrast100->Name = L"Contrast100";
			this->Contrast100->Size = System::Drawing::Size(25, 13);
			this->Contrast100->TabIndex = 11;
			this->Contrast100->Text = L"100";
			// 
			// Contrast0
			// 
			this->Contrast0->AutoSize = true;
			this->Contrast0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->Contrast0->Location = System::Drawing::Point(984, 820);
			this->Contrast0->Name = L"Contrast0";
			this->Contrast0->Size = System::Drawing::Size(13, 13);
			this->Contrast0->TabIndex = 10;
			this->Contrast0->Text = L"0";
			// 
			// ContrastLabel
			// 
			this->ContrastLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ContrastLabel->BackColor = System::Drawing::Color::Transparent;
			this->ContrastLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->ContrastLabel->Location = System::Drawing::Point(976, 780);
			this->ContrastLabel->Name = L"ContrastLabel";
			this->ContrastLabel->Size = System::Drawing::Size(360, 15);
			this->ContrastLabel->TabIndex = 9;
			this->ContrastLabel->Text = L"Contrast";
			this->ContrastLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ContrastSlider
			// 
			this->ContrastSlider->AutoSize = false;
			this->ContrastSlider->BackColor = System::Drawing::Color::White;
			this->ContrastSlider->Cursor = System::Windows::Forms::Cursors::Default;
			this->ContrastSlider->Location = System::Drawing::Point(976, 795);
			this->ContrastSlider->Maximum = 100;
			this->ContrastSlider->Name = L"ContrastSlider";
			this->ContrastSlider->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ContrastSlider->Size = System::Drawing::Size(360, 45);
			this->ContrastSlider->TabIndex = 8;
			this->ContrastSlider->Value = 50;
			// 
			// ImagerBox
			// 
			this->ImagerBox->BackColor = System::Drawing::Color::White;
			this->ImagerBox->Controls->Add(this->RemoveImageButton);
			this->ImagerBox->Controls->Add(this->SaveImageButton);
			this->ImagerBox->Controls->Add(this->richTextBox1);
			this->ImagerBox->Controls->Add(this->Cy3ExposureEnter);
			this->ImagerBox->Controls->Add(this->ImageBoxLabel);
			this->ImagerBox->Controls->Add(this->ImageBox);
			this->ImagerBox->Controls->Add(this->Cy5Select);
			this->ImagerBox->Controls->Add(this->Cy3Select);
			this->ImagerBox->Controls->Add(this->Cy2Select);
			this->ImagerBox->Controls->Add(this->Cy2ExposureEnter);
			this->ImagerBox->Controls->Add(this->ExposureLabel);
			this->ImagerBox->Controls->Add(this->ScalingBox);
			this->ImagerBox->Controls->Add(this->AcquireImageButton);
			this->ImagerBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->ImagerBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ImagerBox->Location = System::Drawing::Point(10, 5);
			this->ImagerBox->Name = L"ImagerBox";
			this->ImagerBox->Size = System::Drawing::Size(278, 405);
			this->ImagerBox->TabIndex = 12;
			this->ImagerBox->TabStop = false;
			this->ImagerBox->Text = L"Imager";
			// 
			// RemoveImageButton
			// 
			this->RemoveImageButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->RemoveImageButton->Location = System::Drawing::Point(108, 375);
			this->RemoveImageButton->Name = L"RemoveImageButton";
			this->RemoveImageButton->Size = System::Drawing::Size(100, 25);
			this->RemoveImageButton->TabIndex = 12;
			this->RemoveImageButton->Text = L"Remove Image";
			this->RemoveImageButton->UseVisualStyleBackColor = true;
			// 
			// SaveImageButton
			// 
			this->SaveImageButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->SaveImageButton->Location = System::Drawing::Point(9, 375);
			this->SaveImageButton->Name = L"SaveImageButton";
			this->SaveImageButton->Size = System::Drawing::Size(100, 25);
			this->SaveImageButton->TabIndex = 11;
			this->SaveImageButton->Text = L"Save Image";
			this->SaveImageButton->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->richTextBox1->Location = System::Drawing::Point(223, 138);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(45, 25);
			this->richTextBox1->TabIndex = 10;
			this->richTextBox1->Text = L"1";
			// 
			// Cy3ExposureEnter
			// 
			this->Cy3ExposureEnter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Cy3ExposureEnter->Location = System::Drawing::Point(168, 138);
			this->Cy3ExposureEnter->Name = L"Cy3ExposureEnter";
			this->Cy3ExposureEnter->Size = System::Drawing::Size(45, 25);
			this->Cy3ExposureEnter->TabIndex = 9;
			this->Cy3ExposureEnter->Text = L"1";
			// 
			// ImageBoxLabel
			// 
			this->ImageBoxLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->ImageBoxLabel->Location = System::Drawing::Point(10, 168);
			this->ImageBoxLabel->Name = L"ImageBoxLabel";
			this->ImageBoxLabel->Size = System::Drawing::Size(258, 20);
			this->ImageBoxLabel->TabIndex = 8;
			this->ImageBoxLabel->Text = L"Images";
			this->ImageBoxLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ImageBox
			// 
			this->ImageBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->ImageBox->FormattingEnabled = true;
			this->ImageBox->ItemHeight = 15;
			this->ImageBox->Location = System::Drawing::Point(10, 191);
			this->ImageBox->Name = L"ImageBox";
			this->ImageBox->ScrollAlwaysVisible = true;
			this->ImageBox->Size = System::Drawing::Size(258, 184);
			this->ImageBox->TabIndex = 7;
			// 
			// Cy5Select
			// 
			this->Cy5Select->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Cy5Select->Location = System::Drawing::Point(223, 110);
			this->Cy5Select->Name = L"Cy5Select";
			this->Cy5Select->Size = System::Drawing::Size(50, 25);
			this->Cy5Select->TabIndex = 5;
			this->Cy5Select->Text = L"Cy5";
			this->Cy5Select->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Cy5Select->UseVisualStyleBackColor = true;
			// 
			// Cy3Select
			// 
			this->Cy3Select->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Cy3Select->Location = System::Drawing::Point(168, 110);
			this->Cy3Select->Name = L"Cy3Select";
			this->Cy3Select->Size = System::Drawing::Size(50, 25);
			this->Cy3Select->TabIndex = 4;
			this->Cy3Select->Text = L"Cy3";
			this->Cy3Select->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Cy3Select->UseVisualStyleBackColor = true;
			// 
			// Cy2Select
			// 
			this->Cy2Select->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Cy2Select->Location = System::Drawing::Point(113, 110);
			this->Cy2Select->Name = L"Cy2Select";
			this->Cy2Select->Size = System::Drawing::Size(50, 25);
			this->Cy2Select->TabIndex = 3;
			this->Cy2Select->Text = L"Cy2";
			this->Cy2Select->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Cy2Select->UseVisualStyleBackColor = true;
			// 
			// Cy2ExposureEnter
			// 
			this->Cy2ExposureEnter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Cy2ExposureEnter->Location = System::Drawing::Point(113, 138);
			this->Cy2ExposureEnter->Name = L"Cy2ExposureEnter";
			this->Cy2ExposureEnter->Size = System::Drawing::Size(45, 25);
			this->Cy2ExposureEnter->TabIndex = 2;
			this->Cy2ExposureEnter->Text = L"1";
			// 
			// ExposureLabel
			// 
			this->ExposureLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->ExposureLabel->Location = System::Drawing::Point(8, 135);
			this->ExposureLabel->Name = L"ExposureLabel";
			this->ExposureLabel->Size = System::Drawing::Size(95, 25);
			this->ExposureLabel->TabIndex = 1;
			this->ExposureLabel->Text = L"Exposure (sec):";
			this->ExposureLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ScalingBox
			// 
			this->ScalingBox->Controls->Add(this->ApplyButton);
			this->ScalingBox->Controls->Add(this->MaxEnterLabel);
			this->ScalingBox->Controls->Add(this->MinEnterLabel);
			this->ScalingBox->Controls->Add(this->MaxEnter);
			this->ScalingBox->Controls->Add(this->MinEnter);
			this->ScalingBox->Controls->Add(this->MinMaxDisplay);
			this->ScalingBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->ScalingBox->Location = System::Drawing::Point(10, 20);
			this->ScalingBox->Name = L"ScalingBox";
			this->ScalingBox->Size = System::Drawing::Size(258, 85);
			this->ScalingBox->TabIndex = 0;
			this->ScalingBox->TabStop = false;
			this->ScalingBox->Text = L"Scaling";
			// 
			// ApplyButton
			// 
			this->ApplyButton->Location = System::Drawing::Point(199, 50);
			this->ApplyButton->Name = L"ApplyButton";
			this->ApplyButton->Size = System::Drawing::Size(50, 25);
			this->ApplyButton->TabIndex = 5;
			this->ApplyButton->Text = L"Apply";
			this->ApplyButton->UseVisualStyleBackColor = true;
			this->ApplyButton->Click += gcnew System::EventHandler(this, &MyForm::ApplyButton_Click);
			// 
			// MaxEnterLabel
			// 
			this->MaxEnterLabel->Location = System::Drawing::Point(100, 48);
			this->MaxEnterLabel->Name = L"MaxEnterLabel";
			this->MaxEnterLabel->Size = System::Drawing::Size(40, 25);
			this->MaxEnterLabel->TabIndex = 4;
			this->MaxEnterLabel->Text = L"Max:";
			this->MaxEnterLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MinEnterLabel
			// 
			this->MinEnterLabel->Location = System::Drawing::Point(10, 48);
			this->MinEnterLabel->Name = L"MinEnterLabel";
			this->MinEnterLabel->Size = System::Drawing::Size(40, 25);
			this->MinEnterLabel->TabIndex = 3;
			this->MinEnterLabel->Text = L"Min:";
			this->MinEnterLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MaxEnter
			// 
			this->MaxEnter->Location = System::Drawing::Point(140, 50);
			this->MaxEnter->MaxLength = 5;
			this->MaxEnter->Name = L"MaxEnter";
			this->MaxEnter->Size = System::Drawing::Size(50, 25);
			this->MaxEnter->TabIndex = 2;
			this->MaxEnter->Text = L"";
			// 
			// MinEnter
			// 
			this->MinEnter->Location = System::Drawing::Point(50, 50);
			this->MinEnter->MaxLength = 5;
			this->MinEnter->Name = L"MinEnter";
			this->MinEnter->Size = System::Drawing::Size(50, 25);
			this->MinEnter->TabIndex = 1;
			this->MinEnter->Text = L"";
			// 
			// MinMaxDisplay
			// 
			this->MinMaxDisplay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MinMaxDisplay->Location = System::Drawing::Point(10, 20);
			this->MinMaxDisplay->Name = L"MinMaxDisplay";
			this->MinMaxDisplay->Size = System::Drawing::Size(180, 25);
			this->MinMaxDisplay->TabIndex = 0;
			this->MinMaxDisplay->Text = L"Min: 0, Max: 0";
			this->MinMaxDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AcquireImageButton
			// 
			this->AcquireImageButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->AcquireImageButton->Location = System::Drawing::Point(10, 110);
			this->AcquireImageButton->Name = L"AcquireImageButton";
			this->AcquireImageButton->Size = System::Drawing::Size(95, 25);
			this->AcquireImageButton->TabIndex = 6;
			this->AcquireImageButton->Text = L"Acquire Image";
			this->AcquireImageButton->UseVisualStyleBackColor = true;
			// 
			// EluterBox
			// 
			this->EluterBox->BackColor = System::Drawing::Color::White;
			this->EluterBox->Controls->Add(this->DisplaySpotsSelect);
			this->EluterBox->Controls->Add(this->ElutionTimeBox);
			this->EluterBox->Controls->Add(this->CurrentBox);
			this->EluterBox->Controls->Add(this->VoltageBox);
			this->EluterBox->Controls->Add(this->VoltageBoxLabel);
			this->EluterBox->Controls->Add(this->CurrentBoxLabel);
			this->EluterBox->Controls->Add(this->ElutionTimeLabel);
			this->EluterBox->Controls->Add(this->ImageCutAreaButton);
			this->EluterBox->Controls->Add(this->StopElutionButton);
			this->EluterBox->Controls->Add(this->EluteSpotsButton);
			this->EluterBox->Controls->Add(this->RemoveSpotsButton);
			this->EluterBox->Controls->Add(this->SelectSpotsButton);
			this->EluterBox->Controls->Add(this->SpotsLabel);
			this->EluterBox->Controls->Add(this->SpotBox);
			this->EluterBox->Controls->Add(this->TipColBox);
			this->EluterBox->Controls->Add(this->TipRowBox);
			this->EluterBox->Controls->Add(this->NextButton);
			this->EluterBox->Controls->Add(this->PrevButton);
			this->EluterBox->Controls->Add(this->TipLabel);
			this->EluterBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->EluterBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->EluterBox->Location = System::Drawing::Point(298, 5);
			this->EluterBox->Name = L"EluterBox";
			this->EluterBox->Size = System::Drawing::Size(278, 405);
			this->EluterBox->TabIndex = 13;
			this->EluterBox->TabStop = false;
			this->EluterBox->Text = L"Eluter";
			// 
			// DisplaySpotsSelect
			// 
			this->DisplaySpotsSelect->AutoSize = true;
			this->DisplaySpotsSelect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->DisplaySpotsSelect->Location = System::Drawing::Point(135, 158);
			this->DisplaySpotsSelect->Name = L"DisplaySpotsSelect";
			this->DisplaySpotsSelect->Size = System::Drawing::Size(100, 19);
			this->DisplaySpotsSelect->TabIndex = 22;
			this->DisplaySpotsSelect->Text = L"Display Spots";
			this->DisplaySpotsSelect->UseVisualStyleBackColor = true;
			// 
			// ElutionTimeBox
			// 
			this->ElutionTimeBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ElutionTimeBox->Location = System::Drawing::Point(215, 365);
			this->ElutionTimeBox->Name = L"ElutionTimeBox";
			this->ElutionTimeBox->Size = System::Drawing::Size(55, 25);
			this->ElutionTimeBox->TabIndex = 21;
			this->ElutionTimeBox->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CurrentBox
			// 
			this->CurrentBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CurrentBox->Location = System::Drawing::Point(154, 365);
			this->CurrentBox->Name = L"CurrentBox";
			this->CurrentBox->Size = System::Drawing::Size(55, 25);
			this->CurrentBox->TabIndex = 20;
			this->CurrentBox->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// VoltageBox
			// 
			this->VoltageBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->VoltageBox->Location = System::Drawing::Point(93, 365);
			this->VoltageBox->Name = L"VoltageBox";
			this->VoltageBox->Size = System::Drawing::Size(55, 25);
			this->VoltageBox->TabIndex = 19;
			this->VoltageBox->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// VoltageBoxLabel
			// 
			this->VoltageBoxLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->VoltageBoxLabel->Location = System::Drawing::Point(90, 333);
			this->VoltageBoxLabel->Name = L"VoltageBoxLabel";
			this->VoltageBoxLabel->Size = System::Drawing::Size(61, 30);
			this->VoltageBoxLabel->TabIndex = 18;
			this->VoltageBoxLabel->Text = L"Voltage";
			this->VoltageBoxLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CurrentBoxLabel
			// 
			this->CurrentBoxLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->CurrentBoxLabel->Location = System::Drawing::Point(151, 333);
			this->CurrentBoxLabel->Name = L"CurrentBoxLabel";
			this->CurrentBoxLabel->Size = System::Drawing::Size(61, 30);
			this->CurrentBoxLabel->TabIndex = 17;
			this->CurrentBoxLabel->Text = L"Current";
			this->CurrentBoxLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ElutionTimeLabel
			// 
			this->ElutionTimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->ElutionTimeLabel->Location = System::Drawing::Point(210, 333);
			this->ElutionTimeLabel->Name = L"ElutionTimeLabel";
			this->ElutionTimeLabel->Size = System::Drawing::Size(65, 30);
			this->ElutionTimeLabel->TabIndex = 16;
			this->ElutionTimeLabel->Text = L"Elution Time";
			this->ElutionTimeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ImageCutAreaButton
			// 
			this->ImageCutAreaButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->ImageCutAreaButton->Location = System::Drawing::Point(120, 268);
			this->ImageCutAreaButton->Name = L"ImageCutAreaButton";
			this->ImageCutAreaButton->Size = System::Drawing::Size(123, 25);
			this->ImageCutAreaButton->TabIndex = 12;
			this->ImageCutAreaButton->Text = L"Image Eluted Areas";
			this->ImageCutAreaButton->UseVisualStyleBackColor = true;
			// 
			// StopElutionButton
			// 
			this->StopElutionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->StopElutionButton->Location = System::Drawing::Point(125, 223);
			this->StopElutionButton->Name = L"StopElutionButton";
			this->StopElutionButton->Size = System::Drawing::Size(113, 25);
			this->StopElutionButton->TabIndex = 11;
			this->StopElutionButton->Text = L"Stop Elution";
			this->StopElutionButton->UseVisualStyleBackColor = true;
			// 
			// EluteSpotsButton
			// 
			this->EluteSpotsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->EluteSpotsButton->Location = System::Drawing::Point(125, 193);
			this->EluteSpotsButton->Name = L"EluteSpotsButton";
			this->EluteSpotsButton->Size = System::Drawing::Size(113, 25);
			this->EluteSpotsButton->TabIndex = 10;
			this->EluteSpotsButton->Text = L"Elute Spots";
			this->EluteSpotsButton->UseVisualStyleBackColor = true;
			// 
			// RemoveSpotsButton
			// 
			this->RemoveSpotsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->RemoveSpotsButton->Location = System::Drawing::Point(125, 128);
			this->RemoveSpotsButton->Name = L"RemoveSpotsButton";
			this->RemoveSpotsButton->Size = System::Drawing::Size(113, 25);
			this->RemoveSpotsButton->TabIndex = 9;
			this->RemoveSpotsButton->Text = L"Remove Spots";
			this->RemoveSpotsButton->UseVisualStyleBackColor = true;
			// 
			// SelectSpotsButton
			// 
			this->SelectSpotsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->SelectSpotsButton->Location = System::Drawing::Point(125, 98);
			this->SelectSpotsButton->Name = L"SelectSpotsButton";
			this->SelectSpotsButton->Size = System::Drawing::Size(113, 25);
			this->SelectSpotsButton->TabIndex = 8;
			this->SelectSpotsButton->Text = L"Select Spots";
			this->SelectSpotsButton->UseVisualStyleBackColor = true;
			// 
			// SpotsLabel
			// 
			this->SpotsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->SpotsLabel->Location = System::Drawing::Point(10, 75);
			this->SpotsLabel->Name = L"SpotsLabel";
			this->SpotsLabel->Size = System::Drawing::Size(75, 20);
			this->SpotsLabel->TabIndex = 7;
			this->SpotsLabel->Text = L"Spots";
			this->SpotsLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TipColBox
			// 
			this->TipColBox->FormattingEnabled = true;
			this->TipColBox->Items->AddRange(gcnew cli::array< System::Object^  >(16) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16"
			});
			this->TipColBox->Location = System::Drawing::Point(142, 40);
			this->TipColBox->Name = L"TipColBox";
			this->TipColBox->Size = System::Drawing::Size(45, 24);
			this->TipColBox->TabIndex = 5;
			this->TipColBox->Text = L"1";
			// 
			// TipRowBox
			// 
			this->TipRowBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->TipRowBox->FormattingEnabled = true;
			this->TipRowBox->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H" });
			this->TipRowBox->Location = System::Drawing::Point(92, 40);
			this->TipRowBox->Name = L"TipRowBox";
			this->TipRowBox->Size = System::Drawing::Size(45, 24);
			this->TipRowBox->TabIndex = 4;
			this->TipRowBox->Text = L"A";
			// 
			// NextButton
			// 
			this->NextButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->NextButton->Location = System::Drawing::Point(197, 39);
			this->NextButton->Name = L"NextButton";
			this->NextButton->Size = System::Drawing::Size(50, 25);
			this->NextButton->TabIndex = 3;
			this->NextButton->Text = L"Next";
			this->NextButton->UseVisualStyleBackColor = true;
			this->NextButton->Click += gcnew System::EventHandler(this, &MyForm::NextButton_Click);
			// 
			// PrevButton
			// 
			this->PrevButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->PrevButton->Location = System::Drawing::Point(32, 39);
			this->PrevButton->Name = L"PrevButton";
			this->PrevButton->Size = System::Drawing::Size(50, 25);
			this->PrevButton->TabIndex = 2;
			this->PrevButton->Text = L"Prev";
			this->PrevButton->UseVisualStyleBackColor = true;
			this->PrevButton->Click += gcnew System::EventHandler(this, &MyForm::PrevButton_Click);
			// 
			// TipLabel
			// 
			this->TipLabel->BackColor = System::Drawing::Color::Transparent;
			this->TipLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->TipLabel->Location = System::Drawing::Point(0, 15);
			this->TipLabel->Name = L"TipLabel";
			this->TipLabel->Size = System::Drawing::Size(278, 20);
			this->TipLabel->TabIndex = 1;
			this->TipLabel->Text = L"Tip #:";
			this->TipLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LoadButton
			// 
			this->LoadButton->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->LoadButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->LoadButton->Location = System::Drawing::Point(47, 34);
			this->LoadButton->Name = L"LoadButton";
			this->LoadButton->Size = System::Drawing::Size(158, 25);
			this->LoadButton->TabIndex = 0;
			this->LoadButton->Text = L"Load Previous Spots";
			this->LoadButton->UseVisualStyleBackColor = true;
			// 
			// AdvancedBox
			// 
			this->AdvancedBox->BackColor = System::Drawing::Color::White;
			this->AdvancedBox->Controls->Add(this->LoadButton);
			this->AdvancedBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->AdvancedBox->Location = System::Drawing::Point(10, 425);
			this->AdvancedBox->Name = L"AdvancedBox";
			this->AdvancedBox->Size = System::Drawing::Size(278, 405);
			this->AdvancedBox->TabIndex = 14;
			this->AdvancedBox->TabStop = false;
			this->AdvancedBox->Text = L"Advanced";
			// 
			// Zoom
			// 
			this->Zoom->BackColor = System::Drawing::Color::Black;
			this->Zoom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Zoom->Location = System::Drawing::Point(319, 438);
			this->Zoom->Name = L"Zoom";
			this->Zoom->Size = System::Drawing::Size(256, 256);
			this->Zoom->TabIndex = 15;
			this->Zoom->TabStop = false;
			// 
			// Zoom0
			// 
			this->Zoom0->Location = System::Drawing::Point(308, 423);
			this->Zoom0->Name = L"Zoom0";
			this->Zoom0->Size = System::Drawing::Size(10, 15);
			this->Zoom0->TabIndex = 16;
			this->Zoom0->Text = L"0";
			this->Zoom0->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ZoomX2048
			// 
			this->ZoomX2048->BackColor = System::Drawing::Color::Transparent;
			this->ZoomX2048->Location = System::Drawing::Point(545, 423);
			this->ZoomX2048->Name = L"ZoomX2048";
			this->ZoomX2048->Size = System::Drawing::Size(40, 15);
			this->ZoomX2048->TabIndex = 17;
			this->ZoomX2048->Text = L"2048";
			this->ZoomX2048->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ZoomY2048
			// 
			this->ZoomY2048->BackColor = System::Drawing::Color::Transparent;
			this->ZoomY2048->Location = System::Drawing::Point(285, 681);
			this->ZoomY2048->Name = L"ZoomY2048";
			this->ZoomY2048->Size = System::Drawing::Size(40, 15);
			this->ZoomY2048->TabIndex = 18;
			this->ZoomY2048->Text = L"2048";
			this->ZoomY2048->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ZoomY
			// 
			this->ZoomY->Location = System::Drawing::Point(305, 559);
			this->ZoomY->Name = L"ZoomY";
			this->ZoomY->Size = System::Drawing::Size(12, 14);
			this->ZoomY->TabIndex = 19;
			this->ZoomY->Text = L"y";
			// 
			// ZoomX
			// 
			this->ZoomX->Location = System::Drawing::Point(441, 423);
			this->ZoomX->Name = L"ZoomX";
			this->ZoomX->Size = System::Drawing::Size(12, 15);
			this->ZoomX->TabIndex = 20;
			this->ZoomX->Text = L"x";
			// 
			// CurrentZoomDisplay
			// 
			this->CurrentZoomDisplay->BackColor = System::Drawing::Color::Transparent;
			this->CurrentZoomDisplay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CurrentZoomDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->CurrentZoomDisplay->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->CurrentZoomDisplay->Location = System::Drawing::Point(298, 707);
			this->CurrentZoomDisplay->Name = L"CurrentZoomDisplay";
			this->CurrentZoomDisplay->Size = System::Drawing::Size(278, 25);
			this->CurrentZoomDisplay->TabIndex = 21;
			this->CurrentZoomDisplay->Text = L"Center (x, y): (512, 1024)     Side Length: 512";
			this->CurrentZoomDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CurrentZoomBox
			// 
			this->CurrentZoomBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->CurrentZoomBox->Location = System::Drawing::Point(298, 700);
			this->CurrentZoomBox->Name = L"CurrentZoomBox";
			this->CurrentZoomBox->Size = System::Drawing::Size(0, 0);
			this->CurrentZoomBox->TabIndex = 21;
			this->CurrentZoomBox->TabStop = false;
			this->CurrentZoomBox->Text = L"Current Zoom";
			// 
			// NewZoomBox
			// 
			this->NewZoomBox->Controls->Add(this->ResetZoomButton);
			this->NewZoomBox->Controls->Add(this->ApplyZoomButton);
			this->NewZoomBox->Controls->Add(this->SideLengthEnter);
			this->NewZoomBox->Controls->Add(this->CenterYEnter);
			this->NewZoomBox->Controls->Add(this->CenterXEnter);
			this->NewZoomBox->Controls->Add(this->SideLengthLabel);
			this->NewZoomBox->Controls->Add(this->NewCenterLabel);
			this->NewZoomBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->NewZoomBox->Location = System::Drawing::Point(298, 750);
			this->NewZoomBox->Name = L"NewZoomBox";
			this->NewZoomBox->Size = System::Drawing::Size(278, 80);
			this->NewZoomBox->TabIndex = 22;
			this->NewZoomBox->TabStop = false;
			this->NewZoomBox->Text = L"Zoom";
			// 
			// ResetZoomButton
			// 
			this->ResetZoomButton->Location = System::Drawing::Point(188, 48);
			this->ResetZoomButton->Name = L"ResetZoomButton";
			this->ResetZoomButton->Size = System::Drawing::Size(85, 25);
			this->ResetZoomButton->TabIndex = 6;
			this->ResetZoomButton->Text = L"Reset Zoom";
			this->ResetZoomButton->UseVisualStyleBackColor = true;
			this->ResetZoomButton->Click += gcnew System::EventHandler(this, &MyForm::ResetZoomButton_Click);
			// 
			// ApplyZoomButton
			// 
			this->ApplyZoomButton->Location = System::Drawing::Point(188, 18);
			this->ApplyZoomButton->Name = L"ApplyZoomButton";
			this->ApplyZoomButton->Size = System::Drawing::Size(85, 25);
			this->ApplyZoomButton->TabIndex = 5;
			this->ApplyZoomButton->Text = L"Apply Zoom";
			this->ApplyZoomButton->UseVisualStyleBackColor = true;
			this->ApplyZoomButton->Click += gcnew System::EventHandler(this, &MyForm::ApplyZoomButton_Click);
			// 
			// SideLengthEnter
			// 
			this->SideLengthEnter->Location = System::Drawing::Point(84, 48);
			this->SideLengthEnter->Name = L"SideLengthEnter";
			this->SideLengthEnter->Size = System::Drawing::Size(90, 25);
			this->SideLengthEnter->TabIndex = 4;
			this->SideLengthEnter->Text = L"";
			// 
			// CenterYEnter
			// 
			this->CenterYEnter->Location = System::Drawing::Point(132, 18);
			this->CenterYEnter->Name = L"CenterYEnter";
			this->CenterYEnter->Size = System::Drawing::Size(42, 25);
			this->CenterYEnter->TabIndex = 3;
			this->CenterYEnter->Text = L"";
			// 
			// CenterXEnter
			// 
			this->CenterXEnter->Location = System::Drawing::Point(84, 18);
			this->CenterXEnter->Name = L"CenterXEnter";
			this->CenterXEnter->Size = System::Drawing::Size(42, 25);
			this->CenterXEnter->TabIndex = 2;
			this->CenterXEnter->Text = L"";
			this->CenterXEnter->TextChanged += gcnew System::EventHandler(this, &MyForm::CenterXEnter_TextChanged);
			// 
			// SideLengthLabel
			// 
			this->SideLengthLabel->BackColor = System::Drawing::Color::Transparent;
			this->SideLengthLabel->Location = System::Drawing::Point(5, 45);
			this->SideLengthLabel->Name = L"SideLengthLabel";
			this->SideLengthLabel->Size = System::Drawing::Size(80, 25);
			this->SideLengthLabel->TabIndex = 1;
			this->SideLengthLabel->Text = L"Side Length:";
			this->SideLengthLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// NewCenterLabel
			// 
			this->NewCenterLabel->BackColor = System::Drawing::Color::Transparent;
			this->NewCenterLabel->Location = System::Drawing::Point(5, 15);
			this->NewCenterLabel->Name = L"NewCenterLabel";
			this->NewCenterLabel->Size = System::Drawing::Size(200, 25);
			this->NewCenterLabel->TabIndex = 0;
			this->NewCenterLabel->Text = L"Center (x, y): (               ,               )";
			this->NewCenterLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// CurrentZoom
			// 
			this->CurrentZoom->BackColor = System::Drawing::Color::White;
			this->CurrentZoom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CurrentZoom->Location = System::Drawing::Point(351, 534);
			this->CurrentZoom->Name = L"CurrentZoom";
			this->CurrentZoom->Size = System::Drawing::Size(64, 64);
			this->CurrentZoom->TabIndex = 23;
			this->CurrentZoom->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1350, 838);
			this->Controls->Add(this->CurrentZoomDisplay);
			this->Controls->Add(this->CurrentZoom);
			this->Controls->Add(this->NewZoomBox);
			this->Controls->Add(this->CurrentZoomBox);
			this->Controls->Add(this->ZoomX);
			this->Controls->Add(this->ZoomY);
			this->Controls->Add(this->AdvancedBox);
			this->Controls->Add(this->Zoom);
			this->Controls->Add(this->ZoomY2048);
			this->Controls->Add(this->Zoom0);
			this->Controls->Add(this->EluterBox);
			this->Controls->Add(this->ImagerBox);
			this->Controls->Add(this->Contrast100);
			this->Controls->Add(this->Contrast0);
			this->Controls->Add(this->ContrastLabel);
			this->Controls->Add(this->ContrastSlider);
			this->Controls->Add(this->Brightness100);
			this->Controls->Add(this->Brightness0);
			this->Controls->Add(this->BrightnessLabel);
			this->Controls->Add(this->BrightnessSlider);
			this->Controls->Add(this->ImageName);
			this->Controls->Add(this->ImageDisplay);
			this->Controls->Add(this->ZoomX2048);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Imager Robot";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImageDisplay))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrightnessSlider))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ContrastSlider))->EndInit();
			this->ImagerBox->ResumeLayout(false);
			this->ScalingBox->ResumeLayout(false);
			this->EluterBox->ResumeLayout(false);
			this->EluterBox->PerformLayout();
			this->AdvancedBox->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Zoom))->EndInit();
			this->NewZoomBox->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CurrentZoom))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//"""globals"""
System::String^ minVal = L"0";
System::String^ maxVal = L"0";
System::String^ currX = L"512";
System::String^ currY = L"1024";
System::String^ currSL = L"512";
int zoomBoxX = 319;
int zoomBoxY = 572;
int zoomBoxSL = 256;

//Prev Button	(unfinished)
private: System::Void PrevButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if ((this->TipRowBox->SelectedIndex != 0) || (this->TipColBox->SelectedIndex != 0)) {
		if (this->TipColBox->SelectedIndex != 0) this->TipColBox->SelectedIndex--;
		else {
			this->TipRowBox->SelectedIndex--;
			this->TipColBox->SelectedIndex = 15;
		}
	}
}
		
//Next Button	(unfinished)
private: System::Void NextButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if ((this->TipRowBox->SelectedIndex != 7) || (this->TipColBox->SelectedIndex != 15)) {
		if (this->TipColBox->SelectedIndex != 15) this->TipColBox->SelectedIndex++;
		else {
			this->TipRowBox->SelectedIndex++;
			this->TipColBox->SelectedIndex = 0;
		}
	}
}

//Apply Button	(unfinished)
private: System::Void ApplyButton_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		int min = int::Parse(this->MinEnter->Text);
		minVal = this->MinEnter->Text;
	} catch (System::FormatException^) {
		if (!String::Equals(this->MinEnter->Text, L""))  MessageBox::Show(L"The Min value entered must an integer.");
	}
	try {
		int max = int::Parse(this->MaxEnter->Text);
		maxVal = this->MaxEnter->Text;
	} catch (System::FormatException^) {
		if (!String::Equals(this->MaxEnter->Text, L""))  MessageBox::Show(L"The Max value entered must an integer.");
	}
	this->MinEnter->Text = L"";
	this->MaxEnter->Text = L"";
	this->MinMaxDisplay->Text = L"Min: " + minVal + ", Max: " + maxVal;
}

//Reset Zoom Button	(unfinished)
private: System::Void ResetZoomButton_Click(System::Object^  sender, System::EventArgs^  e) {
	currX = L"1024";
	currY = L"1024";
	currSL = L"2048";
	this->CurrentZoomDisplay->Text = L"Center (x, y): (" + currX + ", " + currY + ")     Side Length: " + currSL;
	this->CurrentZoom->Location = System::Drawing::Point(319, 572);
	this->CurrentZoom->Size = System::Drawing::Size(256, 256);
}

//Apply Zoom Button	(unfinished)
private: System::Void ApplyZoomButton_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		int x = int::Parse(this->CenterXEnter->Text);
		if (x < 32 || x > 2016) throw x;
		currX = this->CenterXEnter->Text;
	} catch (System::FormatException^) {
		if (!String::Equals(this->CenterXEnter->Text, L""))  MessageBox::Show(L"The X value entered must an integer.");
	} catch (int x) {
		MessageBox::Show(L"The X value entered must be between 32 and 2016.");
	}

	try {
		int y = int::Parse(this->CenterYEnter->Text);
		if (y < 32 || y > 2016) throw y;
		currY = this->CenterYEnter->Text;
	} catch (System::FormatException^) {
		if (!String::Equals(this->CenterYEnter->Text, L""))  MessageBox::Show(L"The Y value entered must an integer.");
	} catch(int y) {
		MessageBox::Show(L"The Y value entered must be between 32 and 2016.");
	}

	try {
		int sl = int::Parse(this->SideLengthEnter->Text);
		if (sl < 32 || sl > 2048) throw sl;
		currSL = this->SideLengthEnter->Text;
	} catch (System::FormatException^) {
		if (!String::Equals(this->SideLengthEnter->Text, L""))  MessageBox::Show(L"The side length value entered must an integer.");
	} catch (int sl) {
		MessageBox::Show(L"The side length value entered must be between 64 and 2048.");
	}

	if (int::Parse(currSL) > 2 * int::Parse(currX)) currSL = System::Convert::ToString(2 * int::Parse(currX));
	if (int::Parse(currSL) > 2 * int::Parse(currY)) currSL = System::Convert::ToString(2 * int::Parse(currY));
	if (int::Parse(currSL) > 2 * (2048 - int::Parse(currX))) currSL = System::Convert::ToString(2 * (2048 - int::Parse(currX)));
	if (int::Parse(currSL) > 2 * (2048 - int::Parse(currY))) currSL = System::Convert::ToString(2 * (2048 - int::Parse(currY)));

	this->CenterXEnter->Text = L"";
	this->CenterYEnter->Text = L"";
	this->SideLengthEnter->Text = L"";
	this->CurrentZoomDisplay->Text = L"Center (x, y): (" + currX + ", " + currY + ")     Side Length: " + currSL;
	int xOffset = 319 - int::Parse(currSL) / 16 + int::Parse(currX) / 8;
	int yOffset = 572 - int::Parse(currSL) / 16 + int::Parse(currY) / 8;
	this->CurrentZoom->Location = System::Drawing::Point(xOffset, yOffset);
	this->CurrentZoom->Size = System::Drawing::Size(int::Parse(currSL) / 8, int::Parse(currSL) / 8);
}


private: System::Void CenterXEnter_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}