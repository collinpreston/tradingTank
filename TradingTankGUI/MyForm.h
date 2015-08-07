#pragma once

namespace TradingTankGUI {

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newProfileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openProfileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveProfileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveProfileAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  importDataToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exportDataToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  masterLogToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  virtualTimeClockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  simulationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  variablesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  virtualTimeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  adjustVolumeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  adjustLiquityToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  portfolioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addFundsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  adjustTradeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  simulatorToolbarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  analyzeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  howToToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutTradingTankToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  simulationToolBar;


	private: System::Windows::Forms::ToolStripButton^  simStopBtn;
	private: System::Windows::Forms::ToolStripButton^  simRestartBtn;




	private: System::Windows::Forms::ToolStripButton^  loopSimulationBtn;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  stepNextBtn;

	private: System::Windows::Forms::ToolStripButton^  gotoPreviousBtn;
	private: System::Windows::Forms::ToolStripButton^  skipNextTradeBtn;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripProgressBar^  dataProcessedProgressBar;
	private: System::Windows::Forms::ToolStripLabel^  toolStripLabel1;
	private: System::Windows::Forms::ToolStripButton^  resetPortfolioBtn;
	private: System::Windows::Forms::GroupBox^  bsBookBox;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RichTextBox^  sellBookTxtBox;
	private: System::Windows::Forms::RichTextBox^  buyBookTxtBox;
	private: System::Windows::Forms::GroupBox^  recentTradesBox;

	private: System::Windows::Forms::RichTextBox^  recentTradesTxtBox;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  availFundsTxtBox;
	private: System::Windows::Forms::TextBox^  portfolioValTxtBox;
	private: System::Windows::Forms::RichTextBox^  positionsTxtBox;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  portfolioNameTxtBox;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ToolStripButton^  simStartBtn;
	private: System::Windows::Forms::GroupBox^  Trade;
	private: System::Windows::Forms::Button^  placeOrderBtn;

	private: System::Windows::Forms::TextBox^  tradeSymbolTxtBox;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  sellBtn;
	private: System::Windows::Forms::Button^  buyBtn;
	private: System::Windows::Forms::TextBox^  askPriceTxtBox;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  bidPriceTxtBox;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  curPriceTxtBox;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TabControl^  chartTabCtrl;
	private: System::Windows::Forms::TabPage^  chartTabPage;


	private: System::Windows::Forms::TabPage^  histTabPage;

	private: System::Windows::Forms::TextBox^  todayVolTxtBox;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  lastTradeTxtBox;
	private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::RichTextBox^  richTextBox1;
private: System::Windows::Forms::ToolStripMenuItem^  resetPortfolioToolStripMenuItem;
private: System::Windows::Forms::GroupBox^  monitorBox;


	protected: 


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newProfileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openProfileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveProfileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveProfileAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->importDataToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exportDataToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->simulatorToolbarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->virtualTimeClockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->masterLogToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->simulationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->variablesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->virtualTimeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adjustVolumeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adjustLiquityToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adjustTradeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->portfolioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addFundsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetPortfolioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->analyzeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->howToToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutTradingTankToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->simulationToolBar = (gcnew System::Windows::Forms::ToolStrip());
			this->simStartBtn = (gcnew System::Windows::Forms::ToolStripButton());
			this->simStopBtn = (gcnew System::Windows::Forms::ToolStripButton());
			this->simRestartBtn = (gcnew System::Windows::Forms::ToolStripButton());
			this->loopSimulationBtn = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->stepNextBtn = (gcnew System::Windows::Forms::ToolStripButton());
			this->gotoPreviousBtn = (gcnew System::Windows::Forms::ToolStripButton());
			this->skipNextTradeBtn = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->dataProcessedProgressBar = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->resetPortfolioBtn = (gcnew System::Windows::Forms::ToolStripButton());
			this->bsBookBox = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->sellBookTxtBox = (gcnew System::Windows::Forms::RichTextBox());
			this->buyBookTxtBox = (gcnew System::Windows::Forms::RichTextBox());
			this->recentTradesBox = (gcnew System::Windows::Forms::GroupBox());
			this->recentTradesTxtBox = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->availFundsTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->portfolioValTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->positionsTxtBox = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->portfolioNameTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Trade = (gcnew System::Windows::Forms::GroupBox());
			this->chartTabCtrl = (gcnew System::Windows::Forms::TabControl());
			this->chartTabPage = (gcnew System::Windows::Forms::TabPage());
			this->histTabPage = (gcnew System::Windows::Forms::TabPage());
			this->todayVolTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->lastTradeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->askPriceTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->bidPriceTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->curPriceTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->sellBtn = (gcnew System::Windows::Forms::Button());
			this->buyBtn = (gcnew System::Windows::Forms::Button());
			this->placeOrderBtn = (gcnew System::Windows::Forms::Button());
			this->tradeSymbolTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->monitorBox = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1->SuspendLayout();
			this->simulationToolBar->SuspendLayout();
			this->bsBookBox->SuspendLayout();
			this->recentTradesBox->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->Trade->SuspendLayout();
			this->chartTabCtrl->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->fileToolStripMenuItem,
					this->viewToolStripMenuItem, this->simulationToolStripMenuItem, this->analyzeToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1507, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->newProfileToolStripMenuItem,
					this->openProfileToolStripMenuItem, this->saveProfileToolStripMenuItem, this->saveProfileAsToolStripMenuItem, this->importDataToolStripMenuItem,
					this->exportDataToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newProfileToolStripMenuItem
			// 
			this->newProfileToolStripMenuItem->Name = L"newProfileToolStripMenuItem";
			this->newProfileToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->newProfileToolStripMenuItem->Text = L"New Profile";
			// 
			// openProfileToolStripMenuItem
			// 
			this->openProfileToolStripMenuItem->Name = L"openProfileToolStripMenuItem";
			this->openProfileToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->openProfileToolStripMenuItem->Text = L"Open Profile";
			// 
			// saveProfileToolStripMenuItem
			// 
			this->saveProfileToolStripMenuItem->Name = L"saveProfileToolStripMenuItem";
			this->saveProfileToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->saveProfileToolStripMenuItem->Text = L"Save Profile";
			// 
			// saveProfileAsToolStripMenuItem
			// 
			this->saveProfileAsToolStripMenuItem->Name = L"saveProfileAsToolStripMenuItem";
			this->saveProfileAsToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->saveProfileAsToolStripMenuItem->Text = L"Save Profile As";
			// 
			// importDataToolStripMenuItem
			// 
			this->importDataToolStripMenuItem->Name = L"importDataToolStripMenuItem";
			this->importDataToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->importDataToolStripMenuItem->Text = L"Import Data";
			// 
			// exportDataToolStripMenuItem
			// 
			this->exportDataToolStripMenuItem->Name = L"exportDataToolStripMenuItem";
			this->exportDataToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->exportDataToolStripMenuItem->Text = L"Export Data";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->simulatorToolbarToolStripMenuItem,
					this->virtualTimeClockToolStripMenuItem, this->masterLogToolStripMenuItem
			});
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->viewToolStripMenuItem->Text = L"View";
			// 
			// simulatorToolbarToolStripMenuItem
			// 
			this->simulatorToolbarToolStripMenuItem->Name = L"simulatorToolbarToolStripMenuItem";
			this->simulatorToolbarToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->simulatorToolbarToolStripMenuItem->Text = L"Simulator Toolbar";
			// 
			// virtualTimeClockToolStripMenuItem
			// 
			this->virtualTimeClockToolStripMenuItem->Name = L"virtualTimeClockToolStripMenuItem";
			this->virtualTimeClockToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->virtualTimeClockToolStripMenuItem->Text = L"Virtual Time Clock";
			// 
			// masterLogToolStripMenuItem
			// 
			this->masterLogToolStripMenuItem->Name = L"masterLogToolStripMenuItem";
			this->masterLogToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->masterLogToolStripMenuItem->Text = L"Master Log";
			// 
			// simulationToolStripMenuItem
			// 
			this->simulationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->variablesToolStripMenuItem,
					this->portfolioToolStripMenuItem
			});
			this->simulationToolStripMenuItem->Name = L"simulationToolStripMenuItem";
			this->simulationToolStripMenuItem->Size = System::Drawing::Size(76, 20);
			this->simulationToolStripMenuItem->Text = L"Simulation";
			// 
			// variablesToolStripMenuItem
			// 
			this->variablesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->virtualTimeToolStripMenuItem,
					this->adjustVolumeToolStripMenuItem, this->adjustLiquityToolStripMenuItem, this->adjustTradeToolStripMenuItem
			});
			this->variablesToolStripMenuItem->Name = L"variablesToolStripMenuItem";
			this->variablesToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->variablesToolStripMenuItem->Text = L"Variables";
			// 
			// virtualTimeToolStripMenuItem
			// 
			this->virtualTimeToolStripMenuItem->Name = L"virtualTimeToolStripMenuItem";
			this->virtualTimeToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->virtualTimeToolStripMenuItem->Text = L"Virtual Time";
			// 
			// adjustVolumeToolStripMenuItem
			// 
			this->adjustVolumeToolStripMenuItem->Name = L"adjustVolumeToolStripMenuItem";
			this->adjustVolumeToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->adjustVolumeToolStripMenuItem->Text = L"Adjust Volume";
			// 
			// adjustLiquityToolStripMenuItem
			// 
			this->adjustLiquityToolStripMenuItem->Name = L"adjustLiquityToolStripMenuItem";
			this->adjustLiquityToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->adjustLiquityToolStripMenuItem->Text = L"Adjust Liquidity";
			// 
			// adjustTradeToolStripMenuItem
			// 
			this->adjustTradeToolStripMenuItem->Name = L"adjustTradeToolStripMenuItem";
			this->adjustTradeToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->adjustTradeToolStripMenuItem->Text = L"Trade Cost/Fee";
			this->adjustTradeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::adjustTradeToolStripMenuItem_Click);
			// 
			// portfolioToolStripMenuItem
			// 
			this->portfolioToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->addFundsToolStripMenuItem,
					this->addToolStripMenuItem, this->resetPortfolioToolStripMenuItem
			});
			this->portfolioToolStripMenuItem->Name = L"portfolioToolStripMenuItem";
			this->portfolioToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->portfolioToolStripMenuItem->Text = L"Portfolio";
			// 
			// addFundsToolStripMenuItem
			// 
			this->addFundsToolStripMenuItem->Name = L"addFundsToolStripMenuItem";
			this->addFundsToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->addFundsToolStripMenuItem->Text = L"Adjust Funds";
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->addToolStripMenuItem->Text = L"Adjust holdings";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addToolStripMenuItem_Click);
			// 
			// resetPortfolioToolStripMenuItem
			// 
			this->resetPortfolioToolStripMenuItem->Name = L"resetPortfolioToolStripMenuItem";
			this->resetPortfolioToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->resetPortfolioToolStripMenuItem->Text = L"Reset Portfolio";
			// 
			// analyzeToolStripMenuItem
			// 
			this->analyzeToolStripMenuItem->Name = L"analyzeToolStripMenuItem";
			this->analyzeToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->analyzeToolStripMenuItem->Text = L"Analysis";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->howToToolStripMenuItem,
					this->aboutTradingTankToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// howToToolStripMenuItem
			// 
			this->howToToolStripMenuItem->Name = L"howToToolStripMenuItem";
			this->howToToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->howToToolStripMenuItem->Text = L"How To...";
			// 
			// aboutTradingTankToolStripMenuItem
			// 
			this->aboutTradingTankToolStripMenuItem->Name = L"aboutTradingTankToolStripMenuItem";
			this->aboutTradingTankToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->aboutTradingTankToolStripMenuItem->Text = L"About Trading Tank";
			// 
			// simulationToolBar
			// 
			this->simulationToolBar->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
				this->simStartBtn,
					this->simStopBtn, this->simRestartBtn, this->loopSimulationBtn, this->toolStripSeparator1, this->stepNextBtn, this->gotoPreviousBtn,
					this->skipNextTradeBtn, this->toolStripSeparator2, this->dataProcessedProgressBar, this->toolStripLabel1, this->resetPortfolioBtn
			});
			this->simulationToolBar->Location = System::Drawing::Point(0, 24);
			this->simulationToolBar->Name = L"simulationToolBar";
			this->simulationToolBar->Size = System::Drawing::Size(1507, 25);
			this->simulationToolBar->TabIndex = 1;
			this->simulationToolBar->Text = L"toolStrip1";
			// 
			// simStartBtn
			// 
			this->simStartBtn->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->simStartBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"simStartBtn.Image")));
			this->simStartBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->simStartBtn->Name = L"simStartBtn";
			this->simStartBtn->Size = System::Drawing::Size(35, 22);
			this->simStartBtn->Text = L"Start";
			this->simStartBtn->ToolTipText = L"Start Simulation";
			// 
			// simStopBtn
			// 
			this->simStopBtn->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->simStopBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"simStopBtn.Image")));
			this->simStopBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->simStopBtn->Name = L"simStopBtn";
			this->simStopBtn->Size = System::Drawing::Size(35, 22);
			this->simStopBtn->Text = L"Stop";
			this->simStopBtn->ToolTipText = L"Stop Simulation";
			// 
			// simRestartBtn
			// 
			this->simRestartBtn->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->simRestartBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"simRestartBtn.Image")));
			this->simRestartBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->simRestartBtn->Name = L"simRestartBtn";
			this->simRestartBtn->Size = System::Drawing::Size(47, 22);
			this->simRestartBtn->Text = L"Restart";
			this->simRestartBtn->ToolTipText = L"Restart Simulation start";
			// 
			// loopSimulationBtn
			// 
			this->loopSimulationBtn->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->loopSimulationBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loopSimulationBtn.Image")));
			this->loopSimulationBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->loopSimulationBtn->Name = L"loopSimulationBtn";
			this->loopSimulationBtn->Size = System::Drawing::Size(38, 22);
			this->loopSimulationBtn->Text = L"Loop";
			this->loopSimulationBtn->ToolTipText = L"Loop the simulation";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// stepNextBtn
			// 
			this->stepNextBtn->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->stepNextBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"stepNextBtn.Image")));
			this->stepNextBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->stepNextBtn->Name = L"stepNextBtn";
			this->stepNextBtn->Size = System::Drawing::Size(35, 22);
			this->stepNextBtn->Text = L"Next";
			this->stepNextBtn->ToolTipText = L"Step to Next Trade";
			// 
			// gotoPreviousBtn
			// 
			this->gotoPreviousBtn->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->gotoPreviousBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gotoPreviousBtn.Image")));
			this->gotoPreviousBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->gotoPreviousBtn->Name = L"gotoPreviousBtn";
			this->gotoPreviousBtn->Size = System::Drawing::Size(56, 22);
			this->gotoPreviousBtn->Text = L"Previous";
			this->gotoPreviousBtn->ToolTipText = L"Jump to Previous Trade";
			// 
			// skipNextTradeBtn
			// 
			this->skipNextTradeBtn->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->skipNextTradeBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"skipNextTradeBtn.Image")));
			this->skipNextTradeBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->skipNextTradeBtn->Name = L"skipNextTradeBtn";
			this->skipNextTradeBtn->Size = System::Drawing::Size(60, 22);
			this->skipNextTradeBtn->Text = L"Skip Next";
			this->skipNextTradeBtn->ToolTipText = L"Skip Next Trade";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// dataProcessedProgressBar
			// 
			this->dataProcessedProgressBar->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->dataProcessedProgressBar->Name = L"dataProcessedProgressBar";
			this->dataProcessedProgressBar->Size = System::Drawing::Size(100, 22);
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(90, 22);
			this->toolStripLabel1->Text = L"Data Processed:";
			this->toolStripLabel1->ToolTipText = L"Amount of the data that has been processed";
			// 
			// resetPortfolioBtn
			// 
			this->resetPortfolioBtn->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->resetPortfolioBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resetPortfolioBtn.Image")));
			this->resetPortfolioBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->resetPortfolioBtn->Name = L"resetPortfolioBtn";
			this->resetPortfolioBtn->Size = System::Drawing::Size(88, 22);
			this->resetPortfolioBtn->Text = L"Reset Portfolio";
			this->resetPortfolioBtn->ToolTipText = L"Set Portfolio to Original Settings";
			// 
			// bsBookBox
			// 
			this->bsBookBox->Controls->Add(this->label3);
			this->bsBookBox->Controls->Add(this->label4);
			this->bsBookBox->Controls->Add(this->sellBookTxtBox);
			this->bsBookBox->Controls->Add(this->buyBookTxtBox);
			this->bsBookBox->Location = System::Drawing::Point(679, 68);
			this->bsBookBox->Name = L"bsBookBox";
			this->bsBookBox->Size = System::Drawing::Size(340, 317);
			this->bsBookBox->TabIndex = 6;
			this->bsBookBox->TabStop = false;
			this->bsBookBox->Text = L"Buy/Sell";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(230, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Sell Orders";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(62, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Buy Orders";
			// 
			// sellBookTxtBox
			// 
			this->sellBookTxtBox->BackColor = System::Drawing::SystemColors::Window;
			this->sellBookTxtBox->ForeColor = System::Drawing::Color::Green;
			this->sellBookTxtBox->Location = System::Drawing::Point(183, 31);
			this->sellBookTxtBox->Name = L"sellBookTxtBox";
			this->sellBookTxtBox->ReadOnly = true;
			this->sellBookTxtBox->Size = System::Drawing::Size(151, 266);
			this->sellBookTxtBox->TabIndex = 7;
			this->sellBookTxtBox->Text = L"";
			// 
			// buyBookTxtBox
			// 
			this->buyBookTxtBox->BackColor = System::Drawing::SystemColors::Window;
			this->buyBookTxtBox->ForeColor = System::Drawing::Color::Red;
			this->buyBookTxtBox->Location = System::Drawing::Point(6, 32);
			this->buyBookTxtBox->Name = L"buyBookTxtBox";
			this->buyBookTxtBox->ReadOnly = true;
			this->buyBookTxtBox->Size = System::Drawing::Size(171, 265);
			this->buyBookTxtBox->TabIndex = 6;
			this->buyBookTxtBox->Text = L"";
			// 
			// recentTradesBox
			// 
			this->recentTradesBox->Controls->Add(this->recentTradesTxtBox);
			this->recentTradesBox->Location = System::Drawing::Point(997, 456);
			this->recentTradesBox->Name = L"recentTradesBox";
			this->recentTradesBox->Size = System::Drawing::Size(498, 236);
			this->recentTradesBox->TabIndex = 7;
			this->recentTradesBox->TabStop = false;
			this->recentTradesBox->Text = L"Most Recent Trades";
			// 
			// recentTradesTxtBox
			// 
			this->recentTradesTxtBox->Location = System::Drawing::Point(6, 18);
			this->recentTradesTxtBox->Name = L"recentTradesTxtBox";
			this->recentTradesTxtBox->ReadOnly = true;
			this->recentTradesTxtBox->Size = System::Drawing::Size(486, 212);
			this->recentTradesTxtBox->TabIndex = 0;
			this->recentTradesTxtBox->Text = L"";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->richTextBox1);
			this->groupBox2->Controls->Add(this->availFundsTxtBox);
			this->groupBox2->Controls->Add(this->portfolioValTxtBox);
			this->groupBox2->Controls->Add(this->positionsTxtBox);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->portfolioNameTxtBox);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(1043, 68);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(452, 317);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Portfolio Details";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(211, 16);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(74, 13);
			this->label13->TabIndex = 9;
			this->label13->Text = L"Active Orders:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(214, 35);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(232, 265);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// availFundsTxtBox
			// 
			this->availFundsTxtBox->Location = System::Drawing::Point(92, 83);
			this->availFundsTxtBox->Name = L"availFundsTxtBox";
			this->availFundsTxtBox->ReadOnly = true;
			this->availFundsTxtBox->Size = System::Drawing::Size(100, 20);
			this->availFundsTxtBox->TabIndex = 7;
			// 
			// portfolioValTxtBox
			// 
			this->portfolioValTxtBox->Location = System::Drawing::Point(92, 57);
			this->portfolioValTxtBox->Name = L"portfolioValTxtBox";
			this->portfolioValTxtBox->ReadOnly = true;
			this->portfolioValTxtBox->Size = System::Drawing::Size(100, 20);
			this->portfolioValTxtBox->TabIndex = 6;
			// 
			// positionsTxtBox
			// 
			this->positionsTxtBox->Location = System::Drawing::Point(9, 168);
			this->positionsTxtBox->Name = L"positionsTxtBox";
			this->positionsTxtBox->ReadOnly = true;
			this->positionsTxtBox->Size = System::Drawing::Size(183, 132);
			this->positionsTxtBox->TabIndex = 5;
			this->positionsTxtBox->Text = L"";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 152);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Current Positions:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Available Funds:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Portfolio Value:";
			// 
			// portfolioNameTxtBox
			// 
			this->portfolioNameTxtBox->Location = System::Drawing::Point(92, 31);
			this->portfolioNameTxtBox->Name = L"portfolioNameTxtBox";
			this->portfolioNameTxtBox->ReadOnly = true;
			this->portfolioNameTxtBox->Size = System::Drawing::Size(100, 20);
			this->portfolioNameTxtBox->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Portfolio:";
			// 
			// Trade
			// 
			this->Trade->Controls->Add(this->chartTabCtrl);
			this->Trade->Controls->Add(this->todayVolTxtBox);
			this->Trade->Controls->Add(this->label12);
			this->Trade->Controls->Add(this->lastTradeTxtBox);
			this->Trade->Controls->Add(this->label11);
			this->Trade->Controls->Add(this->askPriceTxtBox);
			this->Trade->Controls->Add(this->label10);
			this->Trade->Controls->Add(this->bidPriceTxtBox);
			this->Trade->Controls->Add(this->label9);
			this->Trade->Controls->Add(this->curPriceTxtBox);
			this->Trade->Controls->Add(this->label8);
			this->Trade->Controls->Add(this->sellBtn);
			this->Trade->Controls->Add(this->buyBtn);
			this->Trade->Controls->Add(this->placeOrderBtn);
			this->Trade->Controls->Add(this->tradeSymbolTxtBox);
			this->Trade->Controls->Add(this->label7);
			this->Trade->Location = System::Drawing::Point(12, 236);
			this->Trade->Name = L"Trade";
			this->Trade->Size = System::Drawing::Size(644, 456);
			this->Trade->TabIndex = 9;
			this->Trade->TabStop = false;
			this->Trade->Text = L"Trade";
			// 
			// chartTabCtrl
			// 
			this->chartTabCtrl->Controls->Add(this->chartTabPage);
			this->chartTabCtrl->Controls->Add(this->histTabPage);
			this->chartTabCtrl->Location = System::Drawing::Point(8, 152);
			this->chartTabCtrl->Name = L"chartTabCtrl";
			this->chartTabCtrl->SelectedIndex = 0;
			this->chartTabCtrl->Size = System::Drawing::Size(438, 284);
			this->chartTabCtrl->TabIndex = 15;
			// 
			// chartTabPage
			// 
			this->chartTabPage->Location = System::Drawing::Point(4, 22);
			this->chartTabPage->Name = L"chartTabPage";
			this->chartTabPage->Padding = System::Windows::Forms::Padding(3);
			this->chartTabPage->Size = System::Drawing::Size(430, 258);
			this->chartTabPage->TabIndex = 0;
			this->chartTabPage->Text = L"Chart";
			this->chartTabPage->UseVisualStyleBackColor = true;
			// 
			// histTabPage
			// 
			this->histTabPage->Location = System::Drawing::Point(4, 22);
			this->histTabPage->Name = L"histTabPage";
			this->histTabPage->Padding = System::Windows::Forms::Padding(3);
			this->histTabPage->Size = System::Drawing::Size(430, 258);
			this->histTabPage->TabIndex = 1;
			this->histTabPage->Text = L"History";
			this->histTabPage->UseVisualStyleBackColor = true;
			this->histTabPage->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// todayVolTxtBox
			// 
			this->todayVolTxtBox->Location = System::Drawing::Point(114, 118);
			this->todayVolTxtBox->Name = L"todayVolTxtBox";
			this->todayVolTxtBox->ReadOnly = true;
			this->todayVolTxtBox->Size = System::Drawing::Size(100, 20);
			this->todayVolTxtBox->TabIndex = 14;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft NeoGothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(4, 115);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(67, 21);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Volume:";
			// 
			// lastTradeTxtBox
			// 
			this->lastTradeTxtBox->Location = System::Drawing::Point(361, 121);
			this->lastTradeTxtBox->Name = L"lastTradeTxtBox";
			this->lastTradeTxtBox->ReadOnly = true;
			this->lastTradeTxtBox->Size = System::Drawing::Size(100, 20);
			this->lastTradeTxtBox->TabIndex = 12;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft NeoGothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(251, 118);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 21);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Last:";
			// 
			// askPriceTxtBox
			// 
			this->askPriceTxtBox->Location = System::Drawing::Point(361, 95);
			this->askPriceTxtBox->Name = L"askPriceTxtBox";
			this->askPriceTxtBox->ReadOnly = true;
			this->askPriceTxtBox->Size = System::Drawing::Size(100, 20);
			this->askPriceTxtBox->TabIndex = 10;
			this->askPriceTxtBox->TextChanged += gcnew System::EventHandler(this, &MyForm::askPriceTxtBox_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft NeoGothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(251, 92);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(38, 21);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Ask:";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// bidPriceTxtBox
			// 
			this->bidPriceTxtBox->Location = System::Drawing::Point(361, 69);
			this->bidPriceTxtBox->Name = L"bidPriceTxtBox";
			this->bidPriceTxtBox->ReadOnly = true;
			this->bidPriceTxtBox->Size = System::Drawing::Size(100, 20);
			this->bidPriceTxtBox->TabIndex = 8;
			this->bidPriceTxtBox->TextChanged += gcnew System::EventHandler(this, &MyForm::bidPriceTxtBox_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft NeoGothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(251, 66);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 21);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Bid:";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// curPriceTxtBox
			// 
			this->curPriceTxtBox->Location = System::Drawing::Point(361, 35);
			this->curPriceTxtBox->Name = L"curPriceTxtBox";
			this->curPriceTxtBox->ReadOnly = true;
			this->curPriceTxtBox->Size = System::Drawing::Size(100, 20);
			this->curPriceTxtBox->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft NeoGothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(251, 32);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(104, 21);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Current Price:";
			// 
			// sellBtn
			// 
			this->sellBtn->BackColor = System::Drawing::Color::Firebrick;
			this->sellBtn->Location = System::Drawing::Point(114, 60);
			this->sellBtn->Name = L"sellBtn";
			this->sellBtn->Size = System::Drawing::Size(75, 43);
			this->sellBtn->TabIndex = 4;
			this->sellBtn->Text = L"Sell";
			this->sellBtn->UseVisualStyleBackColor = false;
			// 
			// buyBtn
			// 
			this->buyBtn->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->buyBtn->ForeColor = System::Drawing::Color::Black;
			this->buyBtn->Location = System::Drawing::Point(21, 60);
			this->buyBtn->Name = L"buyBtn";
			this->buyBtn->Size = System::Drawing::Size(75, 43);
			this->buyBtn->TabIndex = 3;
			this->buyBtn->Text = L"Buy";
			this->buyBtn->UseVisualStyleBackColor = false;
			// 
			// placeOrderBtn
			// 
			this->placeOrderBtn->Location = System::Drawing::Point(470, 411);
			this->placeOrderBtn->Name = L"placeOrderBtn";
			this->placeOrderBtn->Size = System::Drawing::Size(168, 39);
			this->placeOrderBtn->TabIndex = 2;
			this->placeOrderBtn->Text = L"Place Order";
			this->placeOrderBtn->UseVisualStyleBackColor = true;
			// 
			// tradeSymbolTxtBox
			// 
			this->tradeSymbolTxtBox->Location = System::Drawing::Point(89, 29);
			this->tradeSymbolTxtBox->Name = L"tradeSymbolTxtBox";
			this->tradeSymbolTxtBox->ReadOnly = true;
			this->tradeSymbolTxtBox->Size = System::Drawing::Size(100, 20);
			this->tradeSymbolTxtBox->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft NeoGothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(17, 26);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 21);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Symbol:";
			// 
			// monitorBox
			// 
			this->monitorBox->Location = System::Drawing::Point(12, 52);
			this->monitorBox->Name = L"monitorBox";
			this->monitorBox->Size = System::Drawing::Size(638, 178);
			this->monitorBox->TabIndex = 10;
			this->monitorBox->TabStop = false;
			this->monitorBox->Text = L"Watch List";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1507, 717);
			this->Controls->Add(this->monitorBox);
			this->Controls->Add(this->Trade);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->recentTradesBox);
			this->Controls->Add(this->bsBookBox);
			this->Controls->Add(this->simulationToolBar);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->Text = L"Trading Tank";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->simulationToolBar->ResumeLayout(false);
			this->simulationToolBar->PerformLayout();
			this->bsBookBox->ResumeLayout(false);
			this->bsBookBox->PerformLayout();
			this->recentTradesBox->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->Trade->ResumeLayout(false);
			this->Trade->PerformLayout();
			this->chartTabCtrl->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
			 }
	private: System::Void toolStripComboBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void toolStripDropDownButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void addToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void adjustTradeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bidPriceTxtBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void askPriceTxtBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
