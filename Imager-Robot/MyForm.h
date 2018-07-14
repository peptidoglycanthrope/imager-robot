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
	private: System::Windows::Forms::PictureBox^  ImageDisplay;
	protected:

	protected:

	protected:

	protected:

	protected:


	private: System::Windows::Forms::Label^  ImageName;
	private: System::Windows::Forms::TrackBar^  MinSlider;

	private: System::Windows::Forms::Label^  MinLabel;
	private: System::Windows::Forms::Label^  Min0;


	private: System::Windows::Forms::Label^  Min65535;
	private: System::Windows::Forms::Label^  Max100;


	private: System::Windows::Forms::Label^  Max0;

	private: System::Windows::Forms::Label^  MaxLabel;
	private: System::Windows::Forms::TrackBar^  MaxSlider;


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

	private: System::Windows::Forms::Button^  SelectSpotsButton;







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
	private: System::Windows::Forms::Label^  ZoomX1024;

	private: System::Windows::Forms::Label^  ZoomY1024;

	private: System::Windows::Forms::Label^  ZoomY;
	private: System::Windows::Forms::Label^  ZoomX;
	private: System::Windows::Forms::Label^  CurrentZoomDisplay;
	private: System::Windows::Forms::GroupBox^  CurrentZoomBox;
	private: System::Windows::Forms::GroupBox^  NewZoomBox;
private: System::Windows::Forms::Label^  NewSLLabel;

private: System::Windows::Forms::Label^  NewTLCLabel;
private: System::Windows::Forms::RichTextBox^  TLCxEnter;
private: System::Windows::Forms::RichTextBox^  TLCyEnter;







	private: System::Windows::Forms::Button^  ResetZoomButton;
	private: System::Windows::Forms::Button^  ApplyZoomButton;
	private: System::Windows::Forms::PictureBox^  CurrentZoom;

	private: System::Windows::Forms::RichTextBox^  Cy3ExposureEnter;
	private: System::Windows::Forms::RichTextBox^  Cy5ExposureEnter;

	private: System::Windows::Forms::Button^  RemoveImageButton;
	private: System::Windows::Forms::Button^  SaveImageButton;
	private: System::Windows::Forms::CheckBox^  DisplaySpotsSelect;
private: System::Windows::Forms::Button^  ToggleButton;
private: System::Windows::Forms::Label^  RecommendedLabel;
private: System::Windows::Forms::Label^  Cy5Recommended;

private: System::Windows::Forms::Label^  Cy3Recommended;
private: System::Windows::Forms::Label^  Cy2Recommended;
private: System::Windows::Forms::Label^  Cy5Label;
private: System::Windows::Forms::Label^  Cy3Label;
private: System::Windows::Forms::Label^  Cy2Label;
private: System::Windows::Forms::Label^  MinCurrVal;
private: System::Windows::Forms::Label^  MaxCurrVal;
private: System::Windows::Forms::GroupBox^  AdvancedImager;


private: System::Windows::Forms::RichTextBox^  NyInput;



private: System::Windows::Forms::Label^  NxLabel;
private: System::Windows::Forms::RichTextBox^  NxInput;

private: System::Windows::Forms::Label^  NyLabel;
private: System::Windows::Forms::Label^  CCDSizeDisplay;

private: System::Windows::Forms::Label^  CCDSizeLabel;
private: System::Windows::Forms::ComboBox^  BinningSelect;

private: System::Windows::Forms::Label^  BinningLabel;
private: System::Windows::Forms::Button^  CCDApplyButton;
private: System::Windows::Forms::GroupBox^  AdvancedEluter;
private: System::Windows::Forms::GroupBox^  AdvancedOther;
private: System::Windows::Forms::Label^  CameraTempDisplay;
private: System::Windows::Forms::Label^  CameraTempLabel;
private: System::Windows::Forms::Button^  SetReccButton;
private: System::Windows::Forms::RichTextBox^  SLxEnter;
private: System::Windows::Forms::RichTextBox^  SLyEnter;




















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
			this->MinSlider = (gcnew System::Windows::Forms::TrackBar());
			this->MinLabel = (gcnew System::Windows::Forms::Label());
			this->Min0 = (gcnew System::Windows::Forms::Label());
			this->Min65535 = (gcnew System::Windows::Forms::Label());
			this->Max100 = (gcnew System::Windows::Forms::Label());
			this->Max0 = (gcnew System::Windows::Forms::Label());
			this->MaxLabel = (gcnew System::Windows::Forms::Label());
			this->MaxSlider = (gcnew System::Windows::Forms::TrackBar());
			this->ImagerBox = (gcnew System::Windows::Forms::GroupBox());
			this->SetReccButton = (gcnew System::Windows::Forms::Button());
			this->Cy5Recommended = (gcnew System::Windows::Forms::Label());
			this->Cy3Recommended = (gcnew System::Windows::Forms::Label());
			this->Cy2Recommended = (gcnew System::Windows::Forms::Label());
			this->Cy5Label = (gcnew System::Windows::Forms::Label());
			this->Cy3Label = (gcnew System::Windows::Forms::Label());
			this->Cy2Label = (gcnew System::Windows::Forms::Label());
			this->RecommendedLabel = (gcnew System::Windows::Forms::Label());
			this->RemoveImageButton = (gcnew System::Windows::Forms::Button());
			this->SaveImageButton = (gcnew System::Windows::Forms::Button());
			this->Cy5ExposureEnter = (gcnew System::Windows::Forms::RichTextBox());
			this->Cy3ExposureEnter = (gcnew System::Windows::Forms::RichTextBox());
			this->ImageBoxLabel = (gcnew System::Windows::Forms::Label());
			this->ImageBox = (gcnew System::Windows::Forms::ListBox());
			this->Cy5Select = (gcnew System::Windows::Forms::CheckBox());
			this->Cy3Select = (gcnew System::Windows::Forms::CheckBox());
			this->Cy2Select = (gcnew System::Windows::Forms::CheckBox());
			this->Cy2ExposureEnter = (gcnew System::Windows::Forms::RichTextBox());
			this->ExposureLabel = (gcnew System::Windows::Forms::Label());
			this->AcquireImageButton = (gcnew System::Windows::Forms::Button());
			this->EluterBox = (gcnew System::Windows::Forms::GroupBox());
			this->ToggleButton = (gcnew System::Windows::Forms::Button());
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
			this->SelectSpotsButton = (gcnew System::Windows::Forms::Button());
			this->SpotsLabel = (gcnew System::Windows::Forms::Label());
			this->TipColBox = (gcnew System::Windows::Forms::ComboBox());
			this->TipRowBox = (gcnew System::Windows::Forms::ComboBox());
			this->NextButton = (gcnew System::Windows::Forms::Button());
			this->PrevButton = (gcnew System::Windows::Forms::Button());
			this->TipLabel = (gcnew System::Windows::Forms::Label());
			this->LoadButton = (gcnew System::Windows::Forms::Button());
			this->AdvancedBox = (gcnew System::Windows::Forms::GroupBox());
			this->AdvancedOther = (gcnew System::Windows::Forms::GroupBox());
			this->CameraTempDisplay = (gcnew System::Windows::Forms::Label());
			this->CameraTempLabel = (gcnew System::Windows::Forms::Label());
			this->AdvancedEluter = (gcnew System::Windows::Forms::GroupBox());
			this->AdvancedImager = (gcnew System::Windows::Forms::GroupBox());
			this->CCDApplyButton = (gcnew System::Windows::Forms::Button());
			this->CCDSizeDisplay = (gcnew System::Windows::Forms::Label());
			this->CCDSizeLabel = (gcnew System::Windows::Forms::Label());
			this->BinningSelect = (gcnew System::Windows::Forms::ComboBox());
			this->BinningLabel = (gcnew System::Windows::Forms::Label());
			this->NxInput = (gcnew System::Windows::Forms::RichTextBox());
			this->NyInput = (gcnew System::Windows::Forms::RichTextBox());
			this->NyLabel = (gcnew System::Windows::Forms::Label());
			this->NxLabel = (gcnew System::Windows::Forms::Label());
			this->Zoom = (gcnew System::Windows::Forms::PictureBox());
			this->Zoom0 = (gcnew System::Windows::Forms::Label());
			this->ZoomX1024 = (gcnew System::Windows::Forms::Label());
			this->ZoomY1024 = (gcnew System::Windows::Forms::Label());
			this->ZoomY = (gcnew System::Windows::Forms::Label());
			this->ZoomX = (gcnew System::Windows::Forms::Label());
			this->CurrentZoomDisplay = (gcnew System::Windows::Forms::Label());
			this->CurrentZoomBox = (gcnew System::Windows::Forms::GroupBox());
			this->NewZoomBox = (gcnew System::Windows::Forms::GroupBox());
			this->ResetZoomButton = (gcnew System::Windows::Forms::Button());
			this->TLCyEnter = (gcnew System::Windows::Forms::RichTextBox());
			this->TLCxEnter = (gcnew System::Windows::Forms::RichTextBox());
			this->ApplyZoomButton = (gcnew System::Windows::Forms::Button());
			this->NewSLLabel = (gcnew System::Windows::Forms::Label());
			this->NewTLCLabel = (gcnew System::Windows::Forms::Label());
			this->CurrentZoom = (gcnew System::Windows::Forms::PictureBox());
			this->MinCurrVal = (gcnew System::Windows::Forms::Label());
			this->MaxCurrVal = (gcnew System::Windows::Forms::Label());
			this->SLxEnter = (gcnew System::Windows::Forms::RichTextBox());
			this->SLyEnter = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImageDisplay))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MinSlider))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MaxSlider))->BeginInit();
			this->ImagerBox->SuspendLayout();
			this->EluterBox->SuspendLayout();
			this->AdvancedBox->SuspendLayout();
			this->AdvancedOther->SuspendLayout();
			this->AdvancedEluter->SuspendLayout();
			this->AdvancedImager->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Zoom))->BeginInit();
			this->NewZoomBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CurrentZoom))->BeginInit();
			this->SuspendLayout();
			// 
			// SpotBox
			// 
			this->SpotBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F));
			this->SpotBox->FormattingEnabled = true;
			this->SpotBox->Location = System::Drawing::Point(10, 105);
			this->SpotBox->Name = L"SpotBox";
			this->SpotBox->ScrollAlwaysVisible = true;
			this->SpotBox->Size = System::Drawing::Size(75, 290);
			this->SpotBox->TabIndex = 5;
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
			this->ImageName->TabIndex = 0;
			this->ImageName->Text = L"[ Image Name ] ";
			this->ImageName->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// MinSlider
			// 
			this->MinSlider->AutoSize = false;
			this->MinSlider->BackColor = System::Drawing::Color::White;
			this->MinSlider->Cursor = System::Windows::Forms::Cursors::Default;
			this->MinSlider->LargeChange = 100;
			this->MinSlider->Location = System::Drawing::Point(586, 795);
			this->MinSlider->Maximum = 65535;
			this->MinSlider->Name = L"MinSlider";
			this->MinSlider->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->MinSlider->Size = System::Drawing::Size(360, 45);
			this->MinSlider->TabIndex = 5;
			this->MinSlider->Value = 1;
			this->MinSlider->Scroll += gcnew System::EventHandler(this, &MyForm::MinSlider_Scroll);
			// 
			// MinLabel
			// 
			this->MinLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MinLabel->BackColor = System::Drawing::Color::Transparent;
			this->MinLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->MinLabel->Location = System::Drawing::Point(586, 780);
			this->MinLabel->Name = L"MinLabel";
			this->MinLabel->Size = System::Drawing::Size(360, 15);
			this->MinLabel->TabIndex = 0;
			this->MinLabel->Text = L"Min";
			this->MinLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Min0
			// 
			this->Min0->AutoSize = true;
			this->Min0->BackColor = System::Drawing::Color::Transparent;
			this->Min0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->Min0->Location = System::Drawing::Point(595, 825);
			this->Min0->Name = L"Min0";
			this->Min0->Size = System::Drawing::Size(13, 13);
			this->Min0->TabIndex = 0;
			this->Min0->Text = L"0";
			// 
			// Min65535
			// 
			this->Min65535->AutoSize = true;
			this->Min65535->BackColor = System::Drawing::Color::Transparent;
			this->Min65535->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->Min65535->Location = System::Drawing::Point(918, 825);
			this->Min65535->Name = L"Min65535";
			this->Min65535->Size = System::Drawing::Size(37, 13);
			this->Min65535->TabIndex = 0;
			this->Min65535->Text = L"65535";
			// 
			// Max100
			// 
			this->Max100->AutoSize = true;
			this->Max100->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->Max100->Location = System::Drawing::Point(1308, 825);
			this->Max100->Name = L"Max100";
			this->Max100->Size = System::Drawing::Size(37, 13);
			this->Max100->TabIndex = 0;
			this->Max100->Text = L"65535";
			// 
			// Max0
			// 
			this->Max0->AutoSize = true;
			this->Max0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->Max0->Location = System::Drawing::Point(985, 825);
			this->Max0->Name = L"Max0";
			this->Max0->Size = System::Drawing::Size(13, 13);
			this->Max0->TabIndex = 0;
			this->Max0->Text = L"0";
			// 
			// MaxLabel
			// 
			this->MaxLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MaxLabel->BackColor = System::Drawing::Color::Transparent;
			this->MaxLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->MaxLabel->Location = System::Drawing::Point(976, 780);
			this->MaxLabel->Name = L"MaxLabel";
			this->MaxLabel->Size = System::Drawing::Size(360, 15);
			this->MaxLabel->TabIndex = 9;
			this->MaxLabel->Text = L"Max";
			this->MaxLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MaxSlider
			// 
			this->MaxSlider->AutoSize = false;
			this->MaxSlider->BackColor = System::Drawing::Color::White;
			this->MaxSlider->Cursor = System::Windows::Forms::Cursors::Default;
			this->MaxSlider->LargeChange = 100;
			this->MaxSlider->Location = System::Drawing::Point(976, 795);
			this->MaxSlider->Maximum = 65535;
			this->MaxSlider->Name = L"MaxSlider";
			this->MaxSlider->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->MaxSlider->Size = System::Drawing::Size(360, 45);
			this->MaxSlider->TabIndex = 6;
			this->MaxSlider->Scroll += gcnew System::EventHandler(this, &MyForm::MaxSlider_Scroll);
			// 
			// ImagerBox
			// 
			this->ImagerBox->BackColor = System::Drawing::Color::White;
			this->ImagerBox->Controls->Add(this->SetReccButton);
			this->ImagerBox->Controls->Add(this->Cy5Recommended);
			this->ImagerBox->Controls->Add(this->Cy3Recommended);
			this->ImagerBox->Controls->Add(this->Cy2Recommended);
			this->ImagerBox->Controls->Add(this->Cy5Label);
			this->ImagerBox->Controls->Add(this->Cy3Label);
			this->ImagerBox->Controls->Add(this->Cy2Label);
			this->ImagerBox->Controls->Add(this->RecommendedLabel);
			this->ImagerBox->Controls->Add(this->RemoveImageButton);
			this->ImagerBox->Controls->Add(this->SaveImageButton);
			this->ImagerBox->Controls->Add(this->Cy5ExposureEnter);
			this->ImagerBox->Controls->Add(this->Cy3ExposureEnter);
			this->ImagerBox->Controls->Add(this->ImageBoxLabel);
			this->ImagerBox->Controls->Add(this->ImageBox);
			this->ImagerBox->Controls->Add(this->Cy5Select);
			this->ImagerBox->Controls->Add(this->Cy3Select);
			this->ImagerBox->Controls->Add(this->Cy2Select);
			this->ImagerBox->Controls->Add(this->Cy2ExposureEnter);
			this->ImagerBox->Controls->Add(this->ExposureLabel);
			this->ImagerBox->Controls->Add(this->AcquireImageButton);
			this->ImagerBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->ImagerBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ImagerBox->Location = System::Drawing::Point(10, 5);
			this->ImagerBox->Name = L"ImagerBox";
			this->ImagerBox->Size = System::Drawing::Size(278, 405);
			this->ImagerBox->TabIndex = 1;
			this->ImagerBox->TabStop = false;
			this->ImagerBox->Text = L"Imager";
			// 
			// SetReccButton
			// 
			this->SetReccButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->SetReccButton->Location = System::Drawing::Point(56, 148);
			this->SetReccButton->Name = L"SetReccButton";
			this->SetReccButton->Size = System::Drawing::Size(166, 25);
			this->SetReccButton->TabIndex = 11;
			this->SetReccButton->Text = L"Set Recommended Times";
			this->SetReccButton->UseVisualStyleBackColor = true;
			// 
			// Cy5Recommended
			// 
			this->Cy5Recommended->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Cy5Recommended->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Cy5Recommended->Location = System::Drawing::Point(208, 118);
			this->Cy5Recommended->Name = L"Cy5Recommended";
			this->Cy5Recommended->Size = System::Drawing::Size(48, 25);
			this->Cy5Recommended->TabIndex = 0;
			// 
			// Cy3Recommended
			// 
			this->Cy3Recommended->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Cy3Recommended->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Cy3Recommended->Location = System::Drawing::Point(127, 118);
			this->Cy3Recommended->Name = L"Cy3Recommended";
			this->Cy3Recommended->Size = System::Drawing::Size(48, 25);
			this->Cy3Recommended->TabIndex = 0;
			// 
			// Cy2Recommended
			// 
			this->Cy2Recommended->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Cy2Recommended->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Cy2Recommended->Location = System::Drawing::Point(46, 118);
			this->Cy2Recommended->Name = L"Cy2Recommended";
			this->Cy2Recommended->Size = System::Drawing::Size(48, 25);
			this->Cy2Recommended->TabIndex = 0;
			// 
			// Cy5Label
			// 
			this->Cy5Label->AutoSize = true;
			this->Cy5Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Cy5Label->Location = System::Drawing::Point(180, 122);
			this->Cy5Label->Name = L"Cy5Label";
			this->Cy5Label->Size = System::Drawing::Size(30, 15);
			this->Cy5Label->TabIndex = 0;
			this->Cy5Label->Text = L"Cy5:";
			// 
			// Cy3Label
			// 
			this->Cy3Label->AutoSize = true;
			this->Cy3Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Cy3Label->Location = System::Drawing::Point(97, 122);
			this->Cy3Label->Name = L"Cy3Label";
			this->Cy3Label->Size = System::Drawing::Size(30, 15);
			this->Cy3Label->TabIndex = 0;
			this->Cy3Label->Text = L"Cy3:";
			// 
			// Cy2Label
			// 
			this->Cy2Label->AutoSize = true;
			this->Cy2Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Cy2Label->Location = System::Drawing::Point(18, 123);
			this->Cy2Label->Name = L"Cy2Label";
			this->Cy2Label->Size = System::Drawing::Size(30, 15);
			this->Cy2Label->TabIndex = 0;
			this->Cy2Label->Text = L"Cy2:";
			// 
			// RecommendedLabel
			// 
			this->RecommendedLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->RecommendedLabel->Location = System::Drawing::Point(1, 88);
			this->RecommendedLabel->Name = L"RecommendedLabel";
			this->RecommendedLabel->Size = System::Drawing::Size(276, 25);
			this->RecommendedLabel->TabIndex = 0;
			this->RecommendedLabel->Text = L"Recommended Exposure Time (sec):";
			this->RecommendedLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// RemoveImageButton
			// 
			this->RemoveImageButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->RemoveImageButton->Location = System::Drawing::Point(127, 373);
			this->RemoveImageButton->Name = L"RemoveImageButton";
			this->RemoveImageButton->Size = System::Drawing::Size(100, 25);
			this->RemoveImageButton->TabIndex = 10;
			this->RemoveImageButton->Text = L"Remove Image";
			this->RemoveImageButton->UseVisualStyleBackColor = true;
			// 
			// SaveImageButton
			// 
			this->SaveImageButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->SaveImageButton->Location = System::Drawing::Point(9, 373);
			this->SaveImageButton->Name = L"SaveImageButton";
			this->SaveImageButton->Size = System::Drawing::Size(100, 25);
			this->SaveImageButton->TabIndex = 9;
			this->SaveImageButton->Text = L"Save Image";
			this->SaveImageButton->UseVisualStyleBackColor = true;
			// 
			// Cy5ExposureEnter
			// 
			this->Cy5ExposureEnter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Cy5ExposureEnter->Location = System::Drawing::Point(223, 54);
			this->Cy5ExposureEnter->Name = L"Cy5ExposureEnter";
			this->Cy5ExposureEnter->Size = System::Drawing::Size(45, 25);
			this->Cy5ExposureEnter->TabIndex = 7;
			this->Cy5ExposureEnter->Text = L"1";
			// 
			// Cy3ExposureEnter
			// 
			this->Cy3ExposureEnter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Cy3ExposureEnter->Location = System::Drawing::Point(168, 54);
			this->Cy3ExposureEnter->Name = L"Cy3ExposureEnter";
			this->Cy3ExposureEnter->Size = System::Drawing::Size(45, 25);
			this->Cy3ExposureEnter->TabIndex = 6;
			this->Cy3ExposureEnter->Text = L"1";
			// 
			// ImageBoxLabel
			// 
			this->ImageBoxLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->ImageBoxLabel->Location = System::Drawing::Point(10, 181);
			this->ImageBoxLabel->Name = L"ImageBoxLabel";
			this->ImageBoxLabel->Size = System::Drawing::Size(258, 20);
			this->ImageBoxLabel->TabIndex = 0;
			this->ImageBoxLabel->Text = L"Images";
			this->ImageBoxLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ImageBox
			// 
			this->ImageBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->ImageBox->FormattingEnabled = true;
			this->ImageBox->ItemHeight = 15;
			this->ImageBox->Location = System::Drawing::Point(10, 204);
			this->ImageBox->Name = L"ImageBox";
			this->ImageBox->ScrollAlwaysVisible = true;
			this->ImageBox->Size = System::Drawing::Size(258, 169);
			this->ImageBox->TabIndex = 8;
			// 
			// Cy5Select
			// 
			this->Cy5Select->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Cy5Select->Location = System::Drawing::Point(223, 24);
			this->Cy5Select->Name = L"Cy5Select";
			this->Cy5Select->Size = System::Drawing::Size(50, 25);
			this->Cy5Select->TabIndex = 4;
			this->Cy5Select->Text = L"Cy5";
			this->Cy5Select->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Cy5Select->UseVisualStyleBackColor = true;
			// 
			// Cy3Select
			// 
			this->Cy3Select->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Cy3Select->Location = System::Drawing::Point(168, 24);
			this->Cy3Select->Name = L"Cy3Select";
			this->Cy3Select->Size = System::Drawing::Size(50, 25);
			this->Cy3Select->TabIndex = 3;
			this->Cy3Select->Text = L"Cy3";
			this->Cy3Select->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Cy3Select->UseVisualStyleBackColor = true;
			// 
			// Cy2Select
			// 
			this->Cy2Select->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Cy2Select->Location = System::Drawing::Point(113, 24);
			this->Cy2Select->Name = L"Cy2Select";
			this->Cy2Select->Size = System::Drawing::Size(50, 25);
			this->Cy2Select->TabIndex = 2;
			this->Cy2Select->Text = L"Cy2";
			this->Cy2Select->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Cy2Select->UseVisualStyleBackColor = true;
			// 
			// Cy2ExposureEnter
			// 
			this->Cy2ExposureEnter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Cy2ExposureEnter->Location = System::Drawing::Point(113, 54);
			this->Cy2ExposureEnter->Name = L"Cy2ExposureEnter";
			this->Cy2ExposureEnter->Size = System::Drawing::Size(45, 25);
			this->Cy2ExposureEnter->TabIndex = 5;
			this->Cy2ExposureEnter->Text = L"1";
			// 
			// ExposureLabel
			// 
			this->ExposureLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->ExposureLabel->Location = System::Drawing::Point(8, 51);
			this->ExposureLabel->Name = L"ExposureLabel";
			this->ExposureLabel->Size = System::Drawing::Size(95, 25);
			this->ExposureLabel->TabIndex = 0;
			this->ExposureLabel->Text = L"Exposure (sec):";
			this->ExposureLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// AcquireImageButton
			// 
			this->AcquireImageButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->AcquireImageButton->Location = System::Drawing::Point(10, 24);
			this->AcquireImageButton->Name = L"AcquireImageButton";
			this->AcquireImageButton->Size = System::Drawing::Size(95, 25);
			this->AcquireImageButton->TabIndex = 1;
			this->AcquireImageButton->Text = L"Acquire Image";
			this->AcquireImageButton->UseVisualStyleBackColor = true;
			// 
			// EluterBox
			// 
			this->EluterBox->BackColor = System::Drawing::Color::White;
			this->EluterBox->Controls->Add(this->ToggleButton);
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
			this->EluterBox->TabIndex = 2;
			this->EluterBox->TabStop = false;
			this->EluterBox->Text = L"Eluter";
			// 
			// ToggleButton
			// 
			this->ToggleButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->ToggleButton->Location = System::Drawing::Point(117, 134);
			this->ToggleButton->Name = L"ToggleButton";
			this->ToggleButton->Size = System::Drawing::Size(129, 25);
			this->ToggleButton->TabIndex = 8;
			this->ToggleButton->Text = L"Save Labeled Image";
			this->ToggleButton->UseVisualStyleBackColor = true;
			// 
			// DisplaySpotsSelect
			// 
			this->DisplaySpotsSelect->AutoSize = true;
			this->DisplaySpotsSelect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->DisplaySpotsSelect->Location = System::Drawing::Point(135, 164);
			this->DisplaySpotsSelect->Name = L"DisplaySpotsSelect";
			this->DisplaySpotsSelect->Size = System::Drawing::Size(100, 19);
			this->DisplaySpotsSelect->TabIndex = 9;
			this->DisplaySpotsSelect->Text = L"Display Spots";
			this->DisplaySpotsSelect->UseVisualStyleBackColor = true;
			// 
			// ElutionTimeBox
			// 
			this->ElutionTimeBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ElutionTimeBox->Location = System::Drawing::Point(215, 371);
			this->ElutionTimeBox->Name = L"ElutionTimeBox";
			this->ElutionTimeBox->Size = System::Drawing::Size(55, 25);
			this->ElutionTimeBox->TabIndex = 0;
			this->ElutionTimeBox->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CurrentBox
			// 
			this->CurrentBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CurrentBox->Location = System::Drawing::Point(154, 371);
			this->CurrentBox->Name = L"CurrentBox";
			this->CurrentBox->Size = System::Drawing::Size(55, 25);
			this->CurrentBox->TabIndex = 0;
			this->CurrentBox->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// VoltageBox
			// 
			this->VoltageBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->VoltageBox->Location = System::Drawing::Point(93, 371);
			this->VoltageBox->Name = L"VoltageBox";
			this->VoltageBox->Size = System::Drawing::Size(55, 25);
			this->VoltageBox->TabIndex = 0;
			this->VoltageBox->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// VoltageBoxLabel
			// 
			this->VoltageBoxLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->VoltageBoxLabel->Location = System::Drawing::Point(90, 339);
			this->VoltageBoxLabel->Name = L"VoltageBoxLabel";
			this->VoltageBoxLabel->Size = System::Drawing::Size(61, 30);
			this->VoltageBoxLabel->TabIndex = 0;
			this->VoltageBoxLabel->Text = L"Voltage";
			this->VoltageBoxLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CurrentBoxLabel
			// 
			this->CurrentBoxLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->CurrentBoxLabel->Location = System::Drawing::Point(151, 339);
			this->CurrentBoxLabel->Name = L"CurrentBoxLabel";
			this->CurrentBoxLabel->Size = System::Drawing::Size(61, 30);
			this->CurrentBoxLabel->TabIndex = 0;
			this->CurrentBoxLabel->Text = L"Current";
			this->CurrentBoxLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ElutionTimeLabel
			// 
			this->ElutionTimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->ElutionTimeLabel->Location = System::Drawing::Point(210, 339);
			this->ElutionTimeLabel->Name = L"ElutionTimeLabel";
			this->ElutionTimeLabel->Size = System::Drawing::Size(65, 30);
			this->ElutionTimeLabel->TabIndex = 0;
			this->ElutionTimeLabel->Text = L"Elution Time";
			this->ElutionTimeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ImageCutAreaButton
			// 
			this->ImageCutAreaButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->ImageCutAreaButton->Location = System::Drawing::Point(117, 291);
			this->ImageCutAreaButton->Name = L"ImageCutAreaButton";
			this->ImageCutAreaButton->Size = System::Drawing::Size(129, 25);
			this->ImageCutAreaButton->TabIndex = 12;
			this->ImageCutAreaButton->Text = L"Image Eluted Areas";
			this->ImageCutAreaButton->UseVisualStyleBackColor = true;
			// 
			// StopElutionButton
			// 
			this->StopElutionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->StopElutionButton->Location = System::Drawing::Point(124, 236);
			this->StopElutionButton->Name = L"StopElutionButton";
			this->StopElutionButton->Size = System::Drawing::Size(115, 25);
			this->StopElutionButton->TabIndex = 11;
			this->StopElutionButton->Text = L"Stop Elution";
			this->StopElutionButton->UseVisualStyleBackColor = true;
			// 
			// EluteSpotsButton
			// 
			this->EluteSpotsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->EluteSpotsButton->Location = System::Drawing::Point(124, 206);
			this->EluteSpotsButton->Name = L"EluteSpotsButton";
			this->EluteSpotsButton->Size = System::Drawing::Size(115, 25);
			this->EluteSpotsButton->TabIndex = 10;
			this->EluteSpotsButton->Text = L"Elute Spots";
			this->EluteSpotsButton->UseVisualStyleBackColor = true;
			// 
			// SelectSpotsButton
			// 
			this->SelectSpotsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->SelectSpotsButton->Location = System::Drawing::Point(124, 104);
			this->SelectSpotsButton->Name = L"SelectSpotsButton";
			this->SelectSpotsButton->Size = System::Drawing::Size(115, 25);
			this->SelectSpotsButton->TabIndex = 6;
			this->SelectSpotsButton->Text = L"Select Spots";
			this->SelectSpotsButton->UseVisualStyleBackColor = true;
			// 
			// SpotsLabel
			// 
			this->SpotsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->SpotsLabel->Location = System::Drawing::Point(10, 82);
			this->SpotsLabel->Name = L"SpotsLabel";
			this->SpotsLabel->Size = System::Drawing::Size(75, 20);
			this->SpotsLabel->TabIndex = 0;
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
			this->TipColBox->Location = System::Drawing::Point(142, 42);
			this->TipColBox->Name = L"TipColBox";
			this->TipColBox->Size = System::Drawing::Size(45, 24);
			this->TipColBox->TabIndex = 3;
			this->TipColBox->Text = L"1";
			// 
			// TipRowBox
			// 
			this->TipRowBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->TipRowBox->FormattingEnabled = true;
			this->TipRowBox->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H" });
			this->TipRowBox->Location = System::Drawing::Point(92, 42);
			this->TipRowBox->Name = L"TipRowBox";
			this->TipRowBox->Size = System::Drawing::Size(45, 24);
			this->TipRowBox->TabIndex = 2;
			this->TipRowBox->Text = L"A";
			// 
			// NextButton
			// 
			this->NextButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->NextButton->Location = System::Drawing::Point(197, 41);
			this->NextButton->Name = L"NextButton";
			this->NextButton->Size = System::Drawing::Size(50, 25);
			this->NextButton->TabIndex = 4;
			this->NextButton->Text = L"Next";
			this->NextButton->UseVisualStyleBackColor = true;
			this->NextButton->Click += gcnew System::EventHandler(this, &MyForm::NextButton_Click);
			// 
			// PrevButton
			// 
			this->PrevButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->PrevButton->Location = System::Drawing::Point(32, 41);
			this->PrevButton->Name = L"PrevButton";
			this->PrevButton->Size = System::Drawing::Size(50, 25);
			this->PrevButton->TabIndex = 1;
			this->PrevButton->Text = L"Prev";
			this->PrevButton->UseVisualStyleBackColor = true;
			this->PrevButton->Click += gcnew System::EventHandler(this, &MyForm::PrevButton_Click);
			// 
			// TipLabel
			// 
			this->TipLabel->BackColor = System::Drawing::Color::Transparent;
			this->TipLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->TipLabel->Location = System::Drawing::Point(0, 17);
			this->TipLabel->Name = L"TipLabel";
			this->TipLabel->Size = System::Drawing::Size(278, 20);
			this->TipLabel->TabIndex = 0;
			this->TipLabel->Text = L"Tip #:";
			this->TipLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LoadButton
			// 
			this->LoadButton->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->LoadButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->LoadButton->Location = System::Drawing::Point(50, 23);
			this->LoadButton->Name = L"LoadButton";
			this->LoadButton->Size = System::Drawing::Size(158, 25);
			this->LoadButton->TabIndex = 1;
			this->LoadButton->Text = L"Load Previous Spots";
			this->LoadButton->UseVisualStyleBackColor = true;
			// 
			// AdvancedBox
			// 
			this->AdvancedBox->BackColor = System::Drawing::Color::White;
			this->AdvancedBox->Controls->Add(this->AdvancedOther);
			this->AdvancedBox->Controls->Add(this->AdvancedEluter);
			this->AdvancedBox->Controls->Add(this->AdvancedImager);
			this->AdvancedBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->AdvancedBox->Location = System::Drawing::Point(10, 425);
			this->AdvancedBox->Name = L"AdvancedBox";
			this->AdvancedBox->Size = System::Drawing::Size(278, 405);
			this->AdvancedBox->TabIndex = 3;
			this->AdvancedBox->TabStop = false;
			this->AdvancedBox->Text = L"Advanced";
			// 
			// AdvancedOther
			// 
			this->AdvancedOther->Controls->Add(this->CameraTempDisplay);
			this->AdvancedOther->Controls->Add(this->CameraTempLabel);
			this->AdvancedOther->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->AdvancedOther->Location = System::Drawing::Point(10, 230);
			this->AdvancedOther->Name = L"AdvancedOther";
			this->AdvancedOther->Size = System::Drawing::Size(258, 65);
			this->AdvancedOther->TabIndex = 3;
			this->AdvancedOther->TabStop = false;
			this->AdvancedOther->Text = L"Other";
			// 
			// CameraTempDisplay
			// 
			this->CameraTempDisplay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CameraTempDisplay->Location = System::Drawing::Point(154, 25);
			this->CameraTempDisplay->Name = L"CameraTempDisplay";
			this->CameraTempDisplay->Size = System::Drawing::Size(40, 25);
			this->CameraTempDisplay->TabIndex = 1;
			this->CameraTempDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// CameraTempLabel
			// 
			this->CameraTempLabel->Location = System::Drawing::Point(60, 23);
			this->CameraTempLabel->Name = L"CameraTempLabel";
			this->CameraTempLabel->Size = System::Drawing::Size(90, 25);
			this->CameraTempLabel->TabIndex = 0;
			this->CameraTempLabel->Text = L"Camera Temp:";
			this->CameraTempLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// AdvancedEluter
			// 
			this->AdvancedEluter->Controls->Add(this->LoadButton);
			this->AdvancedEluter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->AdvancedEluter->Location = System::Drawing::Point(10, 155);
			this->AdvancedEluter->Name = L"AdvancedEluter";
			this->AdvancedEluter->Size = System::Drawing::Size(258, 65);
			this->AdvancedEluter->TabIndex = 2;
			this->AdvancedEluter->TabStop = false;
			this->AdvancedEluter->Text = L"Eluter";
			// 
			// AdvancedImager
			// 
			this->AdvancedImager->Controls->Add(this->CCDApplyButton);
			this->AdvancedImager->Controls->Add(this->CCDSizeDisplay);
			this->AdvancedImager->Controls->Add(this->CCDSizeLabel);
			this->AdvancedImager->Controls->Add(this->BinningSelect);
			this->AdvancedImager->Controls->Add(this->BinningLabel);
			this->AdvancedImager->Controls->Add(this->NxInput);
			this->AdvancedImager->Controls->Add(this->NyInput);
			this->AdvancedImager->Controls->Add(this->NyLabel);
			this->AdvancedImager->Controls->Add(this->NxLabel);
			this->AdvancedImager->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->AdvancedImager->Location = System::Drawing::Point(10, 20);
			this->AdvancedImager->Name = L"AdvancedImager";
			this->AdvancedImager->Size = System::Drawing::Size(258, 125);
			this->AdvancedImager->TabIndex = 1;
			this->AdvancedImager->TabStop = false;
			this->AdvancedImager->Text = L"Imager";
			// 
			// CCDApplyButton
			// 
			this->CCDApplyButton->Location = System::Drawing::Point(145, 50);
			this->CCDApplyButton->Name = L"CCDApplyButton";
			this->CCDApplyButton->Size = System::Drawing::Size(80, 25);
			this->CCDApplyButton->TabIndex = 4;
			this->CCDApplyButton->Text = L"Apply";
			this->CCDApplyButton->UseVisualStyleBackColor = true;
			this->CCDApplyButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// CCDSizeDisplay
			// 
			this->CCDSizeDisplay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CCDSizeDisplay->Location = System::Drawing::Point(124, 87);
			this->CCDSizeDisplay->Name = L"CCDSizeDisplay";
			this->CCDSizeDisplay->Size = System::Drawing::Size(72, 25);
			this->CCDSizeDisplay->TabIndex = 0;
			this->CCDSizeDisplay->Text = L"1024x1024";
			this->CCDSizeDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CCDSizeLabel
			// 
			this->CCDSizeLabel->Location = System::Drawing::Point(61, 87);
			this->CCDSizeLabel->Name = L"CCDSizeLabel";
			this->CCDSizeLabel->Size = System::Drawing::Size(65, 25);
			this->CCDSizeLabel->TabIndex = 0;
			this->CCDSizeLabel->Text = L"CCD Size:";
			this->CCDSizeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// BinningSelect
			// 
			this->BinningSelect->FormattingEnabled = true;
			this->BinningSelect->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"4", L"8", L"16" });
			this->BinningSelect->Location = System::Drawing::Point(191, 20);
			this->BinningSelect->Name = L"BinningSelect";
			this->BinningSelect->Size = System::Drawing::Size(40, 23);
			this->BinningSelect->TabIndex = 3;
			this->BinningSelect->Text = L"2";
			// 
			// BinningLabel
			// 
			this->BinningLabel->Location = System::Drawing::Point(139, 17);
			this->BinningLabel->Name = L"BinningLabel";
			this->BinningLabel->Size = System::Drawing::Size(55, 25);
			this->BinningLabel->TabIndex = 0;
			this->BinningLabel->Text = L"Binning:";
			this->BinningLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// NxInput
			// 
			this->NxInput->Location = System::Drawing::Point(71, 20);
			this->NxInput->Name = L"NxInput";
			this->NxInput->Size = System::Drawing::Size(45, 25);
			this->NxInput->TabIndex = 1;
			this->NxInput->Text = L"2048";
			// 
			// NyInput
			// 
			this->NyInput->Location = System::Drawing::Point(71, 51);
			this->NyInput->Name = L"NyInput";
			this->NyInput->Size = System::Drawing::Size(45, 25);
			this->NyInput->TabIndex = 2;
			this->NyInput->Text = L"2048";
			// 
			// NyLabel
			// 
			this->NyLabel->Location = System::Drawing::Point(10, 48);
			this->NyLabel->Name = L"NyLabel";
			this->NyLabel->Size = System::Drawing::Size(70, 25);
			this->NyLabel->TabIndex = 0;
			this->NyLabel->Text = L"Ny (CCD):";
			this->NyLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// NxLabel
			// 
			this->NxLabel->Location = System::Drawing::Point(10, 17);
			this->NxLabel->Name = L"NxLabel";
			this->NxLabel->Size = System::Drawing::Size(70, 25);
			this->NxLabel->TabIndex = 0;
			this->NxLabel->Text = L"Nx (CCD):";
			this->NxLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Zoom
			// 
			this->Zoom->BackColor = System::Drawing::Color::Black;
			this->Zoom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Zoom->Location = System::Drawing::Point(319, 445);
			this->Zoom->Name = L"Zoom";
			this->Zoom->Size = System::Drawing::Size(256, 256);
			this->Zoom->TabIndex = 15;
			this->Zoom->TabStop = false;
			// 
			// Zoom0
			// 
			this->Zoom0->Location = System::Drawing::Point(308, 430);
			this->Zoom0->Name = L"Zoom0";
			this->Zoom0->Size = System::Drawing::Size(10, 15);
			this->Zoom0->TabIndex = 0;
			this->Zoom0->Text = L"0";
			this->Zoom0->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ZoomX1024
			// 
			this->ZoomX1024->BackColor = System::Drawing::Color::Transparent;
			this->ZoomX1024->Location = System::Drawing::Point(545, 430);
			this->ZoomX1024->Name = L"ZoomX1024";
			this->ZoomX1024->Size = System::Drawing::Size(40, 15);
			this->ZoomX1024->TabIndex = 0;
			this->ZoomX1024->Text = L"1024";
			this->ZoomX1024->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ZoomY1024
			// 
			this->ZoomY1024->BackColor = System::Drawing::Color::Transparent;
			this->ZoomY1024->Location = System::Drawing::Point(285, 688);
			this->ZoomY1024->Name = L"ZoomY1024";
			this->ZoomY1024->Size = System::Drawing::Size(40, 15);
			this->ZoomY1024->TabIndex = 0;
			this->ZoomY1024->Text = L"1024";
			this->ZoomY1024->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ZoomY
			// 
			this->ZoomY->Location = System::Drawing::Point(305, 566);
			this->ZoomY->Name = L"ZoomY";
			this->ZoomY->Size = System::Drawing::Size(12, 14);
			this->ZoomY->TabIndex = 0;
			this->ZoomY->Text = L"y";
			// 
			// ZoomX
			// 
			this->ZoomX->Location = System::Drawing::Point(441, 430);
			this->ZoomX->Name = L"ZoomX";
			this->ZoomX->Size = System::Drawing::Size(12, 15);
			this->ZoomX->TabIndex = 0;
			this->ZoomX->Text = L"x";
			// 
			// CurrentZoomDisplay
			// 
			this->CurrentZoomDisplay->BackColor = System::Drawing::Color::Transparent;
			this->CurrentZoomDisplay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CurrentZoomDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->CurrentZoomDisplay->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->CurrentZoomDisplay->Location = System::Drawing::Point(298, 708);
			this->CurrentZoomDisplay->Name = L"CurrentZoomDisplay";
			this->CurrentZoomDisplay->Size = System::Drawing::Size(278, 40);
			this->CurrentZoomDisplay->TabIndex = 0;
			this->CurrentZoomDisplay->Text = L"Top Left Corner (x, y): (256, 512)\r\nSide Lengths (x, y): (256, 256)";
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
			this->NewZoomBox->BackColor = System::Drawing::Color::White;
			this->NewZoomBox->Controls->Add(this->SLyEnter);
			this->NewZoomBox->Controls->Add(this->SLxEnter);
			this->NewZoomBox->Controls->Add(this->ResetZoomButton);
			this->NewZoomBox->Controls->Add(this->TLCyEnter);
			this->NewZoomBox->Controls->Add(this->TLCxEnter);
			this->NewZoomBox->Controls->Add(this->ApplyZoomButton);
			this->NewZoomBox->Controls->Add(this->NewSLLabel);
			this->NewZoomBox->Controls->Add(this->NewTLCLabel);
			this->NewZoomBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->NewZoomBox->Location = System::Drawing::Point(298, 750);
			this->NewZoomBox->Name = L"NewZoomBox";
			this->NewZoomBox->Size = System::Drawing::Size(278, 80);
			this->NewZoomBox->TabIndex = 4;
			this->NewZoomBox->TabStop = false;
			this->NewZoomBox->Text = L"Zoom";
			// 
			// ResetZoomButton
			// 
			this->ResetZoomButton->Location = System::Drawing::Point(221, 47);
			this->ResetZoomButton->Name = L"ResetZoomButton";
			this->ResetZoomButton->Size = System::Drawing::Size(51, 25);
			this->ResetZoomButton->TabIndex = 5;
			this->ResetZoomButton->Text = L"Reset";
			this->ResetZoomButton->UseVisualStyleBackColor = true;
			this->ResetZoomButton->Click += gcnew System::EventHandler(this, &MyForm::ResetZoomButton_Click);
			// 
			// TLCyEnter
			// 
			this->TLCyEnter->Location = System::Drawing::Point(172, 18);
			this->TLCyEnter->Name = L"TLCyEnter";
			this->TLCyEnter->Size = System::Drawing::Size(35, 25);
			this->TLCyEnter->TabIndex = 2;
			this->TLCyEnter->Text = L"";
			// 
			// TLCxEnter
			// 
			this->TLCxEnter->Location = System::Drawing::Point(131, 18);
			this->TLCxEnter->Name = L"TLCxEnter";
			this->TLCxEnter->Size = System::Drawing::Size(35, 25);
			this->TLCxEnter->TabIndex = 1;
			this->TLCxEnter->Text = L"";
			// 
			// ApplyZoomButton
			// 
			this->ApplyZoomButton->Location = System::Drawing::Point(223, 16);
			this->ApplyZoomButton->Name = L"ApplyZoomButton";
			this->ApplyZoomButton->Size = System::Drawing::Size(47, 25);
			this->ApplyZoomButton->TabIndex = 4;
			this->ApplyZoomButton->Text = L"Zoom";
			this->ApplyZoomButton->UseVisualStyleBackColor = true;
			// 
			// NewSLLabel
			// 
			this->NewSLLabel->BackColor = System::Drawing::Color::Transparent;
			this->NewSLLabel->Location = System::Drawing::Point(3, 45);
			this->NewSLLabel->Name = L"NewSLLabel";
			this->NewSLLabel->Size = System::Drawing::Size(250, 25);
			this->NewSLLabel->TabIndex = 0;
			this->NewSLLabel->Text = L"Side Lengths (x, y):     (             ,             )";
			this->NewSLLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// NewTLCLabel
			// 
			this->NewTLCLabel->BackColor = System::Drawing::Color::Transparent;
			this->NewTLCLabel->Location = System::Drawing::Point(3, 15);
			this->NewTLCLabel->Name = L"NewTLCLabel";
			this->NewTLCLabel->Size = System::Drawing::Size(250, 25);
			this->NewTLCLabel->TabIndex = 0;
			this->NewTLCLabel->Text = L"Top Left Corner (x, y): (             ,             )";
			this->NewTLCLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// CurrentZoom
			// 
			this->CurrentZoom->BackColor = System::Drawing::Color::White;
			this->CurrentZoom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CurrentZoom->Location = System::Drawing::Point(351, 541);
			this->CurrentZoom->Name = L"CurrentZoom";
			this->CurrentZoom->Size = System::Drawing::Size(64, 64);
			this->CurrentZoom->TabIndex = 23;
			this->CurrentZoom->TabStop = false;
			// 
			// MinCurrVal
			// 
			this->MinCurrVal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->MinCurrVal->Location = System::Drawing::Point(913, 783);
			this->MinCurrVal->Name = L"MinCurrVal";
			this->MinCurrVal->Size = System::Drawing::Size(42, 15);
			this->MinCurrVal->TabIndex = 0;
			this->MinCurrVal->Text = L"0";
			this->MinCurrVal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MaxCurrVal
			// 
			this->MaxCurrVal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->MaxCurrVal->Location = System::Drawing::Point(1303, 783);
			this->MaxCurrVal->Name = L"MaxCurrVal";
			this->MaxCurrVal->Size = System::Drawing::Size(42, 15);
			this->MaxCurrVal->TabIndex = 0;
			this->MaxCurrVal->Text = L"0";
			this->MaxCurrVal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SLxEnter
			// 
			this->SLxEnter->Location = System::Drawing::Point(131, 48);
			this->SLxEnter->Name = L"SLxEnter";
			this->SLxEnter->Size = System::Drawing::Size(35, 25);
			this->SLxEnter->TabIndex = 6;
			this->SLxEnter->Text = L"";
			// 
			// SLyEnter
			// 
			this->SLyEnter->Location = System::Drawing::Point(172, 48);
			this->SLyEnter->Name = L"SLyEnter";
			this->SLyEnter->Size = System::Drawing::Size(35, 25);
			this->SLyEnter->TabIndex = 7;
			this->SLyEnter->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1350, 838);
			this->Controls->Add(this->MaxCurrVal);
			this->Controls->Add(this->MinCurrVal);
			this->Controls->Add(this->CurrentZoomDisplay);
			this->Controls->Add(this->CurrentZoom);
			this->Controls->Add(this->NewZoomBox);
			this->Controls->Add(this->CurrentZoomBox);
			this->Controls->Add(this->ZoomX);
			this->Controls->Add(this->ZoomY);
			this->Controls->Add(this->AdvancedBox);
			this->Controls->Add(this->Zoom);
			this->Controls->Add(this->ZoomY1024);
			this->Controls->Add(this->Zoom0);
			this->Controls->Add(this->EluterBox);
			this->Controls->Add(this->ImagerBox);
			this->Controls->Add(this->Max100);
			this->Controls->Add(this->Max0);
			this->Controls->Add(this->MaxLabel);
			this->Controls->Add(this->MaxSlider);
			this->Controls->Add(this->Min65535);
			this->Controls->Add(this->Min0);
			this->Controls->Add(this->MinLabel);
			this->Controls->Add(this->MinSlider);
			this->Controls->Add(this->ImageName);
			this->Controls->Add(this->ImageDisplay);
			this->Controls->Add(this->ZoomX1024);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Imager Robot";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImageDisplay))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MinSlider))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MaxSlider))->EndInit();
			this->ImagerBox->ResumeLayout(false);
			this->ImagerBox->PerformLayout();
			this->EluterBox->ResumeLayout(false);
			this->EluterBox->PerformLayout();
			this->AdvancedBox->ResumeLayout(false);
			this->AdvancedOther->ResumeLayout(false);
			this->AdvancedEluter->ResumeLayout(false);
			this->AdvancedImager->ResumeLayout(false);
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
System::String^ currX = L"256";
System::String^ currY = L"512";
System::String^ currSL = L"256";
int zoomBoxX = 319;
int zoomBoxY = 438;
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

//Reset Zoom Button	(unfinished)
private: System::Void ResetZoomButton_Click(System::Object^  sender, System::EventArgs^  e) {
	currX = L"512";
	currY = L"512";
	currSL = L"1024";
	this->CurrentZoomDisplay->Text = L"Center (x, y): (" + currX + ", " + currY + ")     Side Length: " + currSL;
	this->CurrentZoom->Location = System::Drawing::Point(319, 445);
	this->CurrentZoom->Size = System::Drawing::Size(256, 256);
}

/*/Apply Zoom Button	(unfinished)
private: System::Void ApplyZoomButton_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		int x = int::Parse(this->CenterXEnter->Text);
		if (x < 32 || x > 992) throw x;
		currX = this->CenterXEnter->Text;
	} catch (System::FormatException^) {
		if (!String::Equals(this->CenterXEnter->Text, L""))  MessageBox::Show(L"The X value entered must an integer.");
	} catch (int x) {
		MessageBox::Show(L"The X value entered must be between 32 and 992.");
	}

	try {
		int y = int::Parse(this->CenterYEnter->Text);
		if (y < 32 || y > 992) throw y;
		currY = this->CenterYEnter->Text;
	} catch (System::FormatException^) {
		if (!String::Equals(this->CenterYEnter->Text, L""))  MessageBox::Show(L"The Y value entered must an integer.");
	} catch(int y) {
		MessageBox::Show(L"The Y value entered must be between 32 and 992.");
	}

	try {
		int sl = int::Parse(this->SideLengthEnter->Text);
		if (sl < 32 || sl > 1024) throw sl;
		currSL = this->SideLengthEnter->Text;
	} catch (System::FormatException^) {
		if (!String::Equals(this->SideLengthEnter->Text, L""))  MessageBox::Show(L"The side length value entered must an integer.");
	} catch (int sl) {
		MessageBox::Show(L"The side length value entered must be between 64 and 1024.");
	}

	if (int::Parse(currSL) > 2 * int::Parse(currX)) currSL = System::Convert::ToString(2 * int::Parse(currX));
	if (int::Parse(currSL) > 2 * int::Parse(currY)) currSL = System::Convert::ToString(2 * int::Parse(currY));
	if (int::Parse(currSL) > 2 * (1024 - int::Parse(currX))) currSL = System::Convert::ToString(2 * (2024 - int::Parse(currX)));
	if (int::Parse(currSL) > 2 * (1024 - int::Parse(currY))) currSL = System::Convert::ToString(2 * (1024 - int::Parse(currY)));

	this->CenterXEnter->Text = L"";
	this->CenterYEnter->Text = L"";
	this->SideLengthEnter->Text = L"";
	this->CurrentZoomDisplay->Text = L"Center (x, y): (" + currX + ", " + currY + ")     Side Length: " + currSL;
	int xOffset = 319 - int::Parse(currSL) / 8 + int::Parse(currX) / 4;
	int yOffset = 438 - int::Parse(currSL) / 8 + int::Parse(currY) / 4;
	this->CurrentZoom->Location = System::Drawing::Point(xOffset, yOffset);
	this->CurrentZoom->Size = System::Drawing::Size(int::Parse(currSL) / 4, int::Parse(currSL) / 4);
}*/

//Min Slider (unfinished)
private: System::Void MinSlider_Scroll(System::Object^  sender, System::EventArgs^  e) {
	this->MinCurrVal->Text = System::Convert::ToString(this->MinSlider->Value); //Min Current Value Display
}

//Max Slider (unfinished)
private: System::Void MaxSlider_Scroll(System::Object^  sender, System::EventArgs^  e) {
	this->MaxCurrVal->Text = System::Convert::ToString(this->MaxSlider->Value); //Max Current Value Display
}

//CCD Size Apply (unfinished)
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	int x = int::Parse(this->NxInput->Text);
	int y = int::Parse(this->NyInput->Text);
	int bin = int::Parse(this->BinningSelect->Text);
	this->CCDSizeDisplay->Text = System::Convert::ToString(x / bin) + "x" + System::Convert::ToString(y / bin); //CCD Size Display
}
};
}