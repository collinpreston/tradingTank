#pragma once

extern void startOrStop(short int panelX, short int panelY);
extern void mouseMoved(short int mouseX, short int mouseY);
extern int updateProgressBar();
namespace TradingTankGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for dataCreator
	/// </summary>

	public ref class dataCreator : public System::Windows::Forms::Form
	{
	public:
		dataCreator(void)
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
		~dataCreator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newCollectionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openCollectionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editCurvesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  graphTypeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lineToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  candleSticksToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  adjustTimeScaleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  adjustTimeRateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  adjustCostScaleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  adjustVolumeScaleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  configureToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  setSymbolToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  useAvgVolumeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  useOpenPricesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  useClosingPricesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  use52WkAvgToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  use52WkRangeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  useBetaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addNewsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addNewsToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  addNewsStoryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addApprovalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addOtherToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  adjustBetaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  curveEditorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  insertTradesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  howToToolStripMenuItem;


	private: System::Windows::Forms::Panel^  mousePanel;
	private: System::Windows::Forms::ProgressBar^  dataMakerProgressBar;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


		// Used to check whether VT is running or stopped.
		// This will be used to start and stop recording makerPad and outputting data files

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newCollectionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openCollectionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editCurvesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graphTypeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lineToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->candleSticksToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adjustTimeScaleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adjustTimeRateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adjustCostScaleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adjustVolumeScaleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setSymbolToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->useAvgVolumeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->useOpenPricesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->useClosingPricesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->use52WkAvgToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->use52WkRangeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->useBetaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addNewsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addNewsToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addNewsStoryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addApprovalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addOtherToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adjustBetaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->curveEditorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insertTradesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->howToToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mousePanel = (gcnew System::Windows::Forms::Panel());
			this->dataMakerProgressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->configureToolStripMenuItem, this->toolsToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(961, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->newCollectionToolStripMenuItem,
					this->openCollectionToolStripMenuItem, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->optionsToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newCollectionToolStripMenuItem
			// 
			this->newCollectionToolStripMenuItem->Name = L"newCollectionToolStripMenuItem";
			this->newCollectionToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->newCollectionToolStripMenuItem->Text = L"New Collection";
			// 
			// openCollectionToolStripMenuItem
			// 
			this->openCollectionToolStripMenuItem->Name = L"openCollectionToolStripMenuItem";
			this->openCollectionToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->openCollectionToolStripMenuItem->Text = L"Open Collection";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->saveAsToolStripMenuItem->Text = L"Save As";
			// 
			// optionsToolStripMenuItem
			// 
			this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
			this->optionsToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->optionsToolStripMenuItem->Text = L"Options";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->editCurvesToolStripMenuItem,
					this->graphTypeToolStripMenuItem, this->adjustTimeScaleToolStripMenuItem, this->adjustTimeRateToolStripMenuItem, this->adjustCostScaleToolStripMenuItem,
					this->adjustVolumeScaleToolStripMenuItem
			});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// editCurvesToolStripMenuItem
			// 
			this->editCurvesToolStripMenuItem->Name = L"editCurvesToolStripMenuItem";
			this->editCurvesToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->editCurvesToolStripMenuItem->Text = L"Edit Curves";
			// 
			// graphTypeToolStripMenuItem
			// 
			this->graphTypeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->lineToolStripMenuItem,
					this->candleSticksToolStripMenuItem
			});
			this->graphTypeToolStripMenuItem->Name = L"graphTypeToolStripMenuItem";
			this->graphTypeToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->graphTypeToolStripMenuItem->Text = L"Graph Type";
			// 
			// lineToolStripMenuItem
			// 
			this->lineToolStripMenuItem->Name = L"lineToolStripMenuItem";
			this->lineToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->lineToolStripMenuItem->Text = L"Line";
			// 
			// candleSticksToolStripMenuItem
			// 
			this->candleSticksToolStripMenuItem->Name = L"candleSticksToolStripMenuItem";
			this->candleSticksToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->candleSticksToolStripMenuItem->Text = L"Candle Sticks";
			// 
			// adjustTimeScaleToolStripMenuItem
			// 
			this->adjustTimeScaleToolStripMenuItem->Name = L"adjustTimeScaleToolStripMenuItem";
			this->adjustTimeScaleToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->adjustTimeScaleToolStripMenuItem->Text = L"Adjust Time Scale";
			// 
			// adjustTimeRateToolStripMenuItem
			// 
			this->adjustTimeRateToolStripMenuItem->Name = L"adjustTimeRateToolStripMenuItem";
			this->adjustTimeRateToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->adjustTimeRateToolStripMenuItem->Text = L"Adjust Time Rate";
			// 
			// adjustCostScaleToolStripMenuItem
			// 
			this->adjustCostScaleToolStripMenuItem->Name = L"adjustCostScaleToolStripMenuItem";
			this->adjustCostScaleToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->adjustCostScaleToolStripMenuItem->Text = L"Adjust Cost Scale";
			// 
			// adjustVolumeScaleToolStripMenuItem
			// 
			this->adjustVolumeScaleToolStripMenuItem->Name = L"adjustVolumeScaleToolStripMenuItem";
			this->adjustVolumeScaleToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->adjustVolumeScaleToolStripMenuItem->Text = L"Adjust Volume Scale";
			// 
			// configureToolStripMenuItem
			// 
			this->configureToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->setSymbolToolStripMenuItem,
					this->addNewsToolStripMenuItem, this->adjustBetaToolStripMenuItem
			});
			this->configureToolStripMenuItem->Name = L"configureToolStripMenuItem";
			this->configureToolStripMenuItem->Size = System::Drawing::Size(72, 20);
			this->configureToolStripMenuItem->Text = L"Configure";
			// 
			// setSymbolToolStripMenuItem
			// 
			this->setSymbolToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->useAvgVolumeToolStripMenuItem,
					this->useOpenPricesToolStripMenuItem, this->useClosingPricesToolStripMenuItem, this->use52WkAvgToolStripMenuItem, this->use52WkRangeToolStripMenuItem,
					this->useBetaToolStripMenuItem
			});
			this->setSymbolToolStripMenuItem->Name = L"setSymbolToolStripMenuItem";
			this->setSymbolToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->setSymbolToolStripMenuItem->Text = L"Reference Symbol";
			// 
			// useAvgVolumeToolStripMenuItem
			// 
			this->useAvgVolumeToolStripMenuItem->Name = L"useAvgVolumeToolStripMenuItem";
			this->useAvgVolumeToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->useAvgVolumeToolStripMenuItem->Text = L"Use Avg. Volume";
			// 
			// useOpenPricesToolStripMenuItem
			// 
			this->useOpenPricesToolStripMenuItem->Name = L"useOpenPricesToolStripMenuItem";
			this->useOpenPricesToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->useOpenPricesToolStripMenuItem->Text = L"Use Open Prices";
			// 
			// useClosingPricesToolStripMenuItem
			// 
			this->useClosingPricesToolStripMenuItem->Name = L"useClosingPricesToolStripMenuItem";
			this->useClosingPricesToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->useClosingPricesToolStripMenuItem->Text = L"Use Closing Prices";
			// 
			// use52WkAvgToolStripMenuItem
			// 
			this->use52WkAvgToolStripMenuItem->Name = L"use52WkAvgToolStripMenuItem";
			this->use52WkAvgToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->use52WkAvgToolStripMenuItem->Text = L"Use 52 wk Avg.";
			// 
			// use52WkRangeToolStripMenuItem
			// 
			this->use52WkRangeToolStripMenuItem->Name = L"use52WkRangeToolStripMenuItem";
			this->use52WkRangeToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->use52WkRangeToolStripMenuItem->Text = L"Use 52 wk Range";
			// 
			// useBetaToolStripMenuItem
			// 
			this->useBetaToolStripMenuItem->Name = L"useBetaToolStripMenuItem";
			this->useBetaToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->useBetaToolStripMenuItem->Text = L"Use Beta";
			// 
			// addNewsToolStripMenuItem
			// 
			this->addNewsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->addNewsToolStripMenuItem1,
					this->addNewsStoryToolStripMenuItem, this->addApprovalToolStripMenuItem, this->addOtherToolStripMenuItem
			});
			this->addNewsToolStripMenuItem->Name = L"addNewsToolStripMenuItem";
			this->addNewsToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->addNewsToolStripMenuItem->Text = L"Price Factors";
			// 
			// addNewsToolStripMenuItem1
			// 
			this->addNewsToolStripMenuItem1->Name = L"addNewsToolStripMenuItem1";
			this->addNewsToolStripMenuItem1->Size = System::Drawing::Size(211, 22);
			this->addNewsToolStripMenuItem1->Text = L"Add Earnings Release";
			// 
			// addNewsStoryToolStripMenuItem
			// 
			this->addNewsStoryToolStripMenuItem->Name = L"addNewsStoryToolStripMenuItem";
			this->addNewsStoryToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->addNewsStoryToolStripMenuItem->Text = L"Add News Story";
			// 
			// addApprovalToolStripMenuItem
			// 
			this->addApprovalToolStripMenuItem->Name = L"addApprovalToolStripMenuItem";
			this->addApprovalToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->addApprovalToolStripMenuItem->Text = L"Add Approval/Production";
			// 
			// addOtherToolStripMenuItem
			// 
			this->addOtherToolStripMenuItem->Name = L"addOtherToolStripMenuItem";
			this->addOtherToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->addOtherToolStripMenuItem->Text = L"Add Other";
			// 
			// adjustBetaToolStripMenuItem
			// 
			this->adjustBetaToolStripMenuItem->Name = L"adjustBetaToolStripMenuItem";
			this->adjustBetaToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->adjustBetaToolStripMenuItem->Text = L"Adjust Beta";
			// 
			// toolsToolStripMenuItem
			// 
			this->toolsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->curveEditorToolStripMenuItem,
					this->insertTradesToolStripMenuItem
			});
			this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
			this->toolsToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->toolsToolStripMenuItem->Text = L"Tools";
			// 
			// curveEditorToolStripMenuItem
			// 
			this->curveEditorToolStripMenuItem->Name = L"curveEditorToolStripMenuItem";
			this->curveEditorToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->curveEditorToolStripMenuItem->Text = L"Curve Editor";
			// 
			// insertTradesToolStripMenuItem
			// 
			this->insertTradesToolStripMenuItem->Name = L"insertTradesToolStripMenuItem";
			this->insertTradesToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->insertTradesToolStripMenuItem->Text = L"Insert Trades";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aboutToolStripMenuItem,
					this->howToToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// howToToolStripMenuItem
			// 
			this->howToToolStripMenuItem->Name = L"howToToolStripMenuItem";
			this->howToToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->howToToolStripMenuItem->Text = L"How To...";
			// 
			// mousePanel
			// 
			this->mousePanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mousePanel->Cursor = System::Windows::Forms::Cursors::Cross;
			this->mousePanel->Location = System::Drawing::Point(174, 89);
			this->mousePanel->Name = L"mousePanel";
			this->mousePanel->Size = System::Drawing::Size(614, 381);
			this->mousePanel->TabIndex = 2;
			this->mousePanel->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &dataCreator::mousePanel_MouseClick);
			// 
			// dataMakerProgressBar
			// 
			this->dataMakerProgressBar->Location = System::Drawing::Point(600, 59);
			this->dataMakerProgressBar->Name = L"dataMakerProgressBar";
			this->dataMakerProgressBar->Size = System::Drawing::Size(188, 24);
			this->dataMakerProgressBar->Step = 1;
			this->dataMakerProgressBar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->dataMakerProgressBar->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(661, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Time Elapsed";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &dataCreator::timer1_Tick);
			// 
			// dataCreator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(961, 763);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataMakerProgressBar);
			this->Controls->Add(this->mousePanel);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"dataCreator";
			this->Text = L"dataCreator";
			this->Load += gcnew System::EventHandler(this, &dataCreator::dataCreator_Load);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &dataCreator::dataCreator_MouseMove);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void dataCreator_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseMoved(e->Location.X, e->Location.Y);
}
private: System::Void dataCreator_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	// This will be used to update the progress bar.
	// Every second it will check the current VT and compare it with
	// the max VT and produce a % of complete simulation.
	this->dataMakerProgressBar->Value = updateProgressBar();
	this->dataMakerProgressBar->Refresh();
}
private: System::Void mousePanel_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	// This call will go to a function in the dataCreator.cpp file
	// Which will be used to connect to outside functions.
	this->timer1->Start();
	startOrStop(this->mousePanel->Location.X, this->mousePanel->Location.Y);
}
};
}