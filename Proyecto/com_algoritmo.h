#pragma once

namespace Proyecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de com_algoritmo
	/// </summary>
	public ref class com_algoritmo : public System::Windows::Forms::Form
	{
	public:
		com_algoritmo(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~com_algoritmo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bt_ide;
	private: System::Windows::Forms::Button^ bt_tip;
	private: System::Windows::Forms::Button^ bt_con;

	protected:

	protected:

	protected:


	private: System::Windows::Forms::Button^ bt_var;
	private: System::Windows::Forms::Button^ bt_ope;
	private: System::Windows::Forms::Label^ TEXTO;
	private: System::Windows::Forms::Button^ bt_simple;
	private: System::Windows::Forms::Button^ bt_estruc;
	private: System::Windows::Forms::Button^ bt_ger;

	private: System::Windows::Forms::Button^ bt_rel;

	private: System::Windows::Forms::Button^ bt_log;

	private: System::Windows::Forms::Button^ bt_ari;

	private: System::Windows::Forms::PictureBox^ pictureBox1;







	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(com_algoritmo::typeid));
			this->bt_ide = (gcnew System::Windows::Forms::Button());
			this->bt_tip = (gcnew System::Windows::Forms::Button());
			this->bt_con = (gcnew System::Windows::Forms::Button());
			this->bt_var = (gcnew System::Windows::Forms::Button());
			this->bt_ope = (gcnew System::Windows::Forms::Button());
			this->TEXTO = (gcnew System::Windows::Forms::Label());
			this->bt_simple = (gcnew System::Windows::Forms::Button());
			this->bt_estruc = (gcnew System::Windows::Forms::Button());
			this->bt_ger = (gcnew System::Windows::Forms::Button());
			this->bt_rel = (gcnew System::Windows::Forms::Button());
			this->bt_log = (gcnew System::Windows::Forms::Button());
			this->bt_ari = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// bt_ide
			// 
			this->bt_ide->BackColor = System::Drawing::Color::Black;
			this->bt_ide->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_ide->ForeColor = System::Drawing::Color::White;
			this->bt_ide->Location = System::Drawing::Point(10, 80);
			this->bt_ide->Name = L"bt_ide";
			this->bt_ide->Size = System::Drawing::Size(300, 30);
			this->bt_ide->TabIndex = 0;
			this->bt_ide->Text = L"Identificadores";
			this->bt_ide->UseVisualStyleBackColor = false;
			this->bt_ide->Click += gcnew System::EventHandler(this, &com_algoritmo::bt_ide_Click);
			// 
			// bt_tip
			// 
			this->bt_tip->BackColor = System::Drawing::Color::Black;
			this->bt_tip->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_tip->ForeColor = System::Drawing::Color::White;
			this->bt_tip->Location = System::Drawing::Point(10, 10);
			this->bt_tip->Name = L"bt_tip";
			this->bt_tip->Size = System::Drawing::Size(300, 30);
			this->bt_tip->TabIndex = 1;
			this->bt_tip->Text = L"Tipos de Datos";
			this->bt_tip->UseVisualStyleBackColor = false;
			this->bt_tip->Click += gcnew System::EventHandler(this, &com_algoritmo::bt_tip_Click);
			// 
			// bt_con
			// 
			this->bt_con->BackColor = System::Drawing::Color::Black;
			this->bt_con->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_con->ForeColor = System::Drawing::Color::White;
			this->bt_con->Location = System::Drawing::Point(10, 120);
			this->bt_con->Name = L"bt_con";
			this->bt_con->Size = System::Drawing::Size(300, 30);
			this->bt_con->TabIndex = 2;
			this->bt_con->Text = L"Constantes";
			this->bt_con->UseVisualStyleBackColor = false;
			this->bt_con->Click += gcnew System::EventHandler(this, &com_algoritmo::bt_con_Click);
			// 
			// bt_var
			// 
			this->bt_var->BackColor = System::Drawing::Color::Black;
			this->bt_var->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_var->ForeColor = System::Drawing::Color::White;
			this->bt_var->Location = System::Drawing::Point(10, 160);
			this->bt_var->Name = L"bt_var";
			this->bt_var->Size = System::Drawing::Size(300, 30);
			this->bt_var->TabIndex = 3;
			this->bt_var->Text = L"Variables";
			this->bt_var->UseVisualStyleBackColor = false;
			this->bt_var->Click += gcnew System::EventHandler(this, &com_algoritmo::bt_var_Click);
			// 
			// bt_ope
			// 
			this->bt_ope->BackColor = System::Drawing::Color::Black;
			this->bt_ope->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_ope->ForeColor = System::Drawing::Color::White;
			this->bt_ope->Location = System::Drawing::Point(10, 200);
			this->bt_ope->Name = L"bt_ope";
			this->bt_ope->Size = System::Drawing::Size(300, 30);
			this->bt_ope->TabIndex = 4;
			this->bt_ope->Text = L"Operadores";
			this->bt_ope->UseVisualStyleBackColor = false;
			this->bt_ope->Click += gcnew System::EventHandler(this, &com_algoritmo::bt_ope_Click);
			// 
			// TEXTO
			// 
			this->TEXTO->AutoSize = true;
			this->TEXTO->BackColor = System::Drawing::Color::Transparent;
			this->TEXTO->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TEXTO->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TEXTO->ForeColor = System::Drawing::Color::White;
			this->TEXTO->Location = System::Drawing::Point(322, 10);
			this->TEXTO->MaximumSize = System::Drawing::Size(650, 160);
			this->TEXTO->MinimumSize = System::Drawing::Size(650, 160);
			this->TEXTO->Name = L"TEXTO";
			this->TEXTO->Size = System::Drawing::Size(650, 160);
			this->TEXTO->TabIndex = 5;
			// 
			// bt_simple
			// 
			this->bt_simple->BackColor = System::Drawing::Color::Black;
			this->bt_simple->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_simple->ForeColor = System::Drawing::Color::White;
			this->bt_simple->Location = System::Drawing::Point(10, 45);
			this->bt_simple->Name = L"bt_simple";
			this->bt_simple->Size = System::Drawing::Size(125, 25);
			this->bt_simple->TabIndex = 6;
			this->bt_simple->Text = L"Simples";
			this->bt_simple->UseVisualStyleBackColor = false;
			this->bt_simple->Click += gcnew System::EventHandler(this, &com_algoritmo::bt_simple_Click);
			// 
			// bt_estruc
			// 
			this->bt_estruc->BackColor = System::Drawing::Color::Black;
			this->bt_estruc->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_estruc->ForeColor = System::Drawing::Color::White;
			this->bt_estruc->Location = System::Drawing::Point(185, 45);
			this->bt_estruc->Name = L"bt_estruc";
			this->bt_estruc->Size = System::Drawing::Size(125, 25);
			this->bt_estruc->TabIndex = 7;
			this->bt_estruc->Text = L"Estructurados";
			this->bt_estruc->UseVisualStyleBackColor = false;
			this->bt_estruc->Click += gcnew System::EventHandler(this, &com_algoritmo::bt_estruc_Click);
			// 
			// bt_ger
			// 
			this->bt_ger->BackColor = System::Drawing::Color::Black;
			this->bt_ger->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_ger->ForeColor = System::Drawing::Color::White;
			this->bt_ger->Location = System::Drawing::Point(185, 265);
			this->bt_ger->Name = L"bt_ger";
			this->bt_ger->Size = System::Drawing::Size(125, 25);
			this->bt_ger->TabIndex = 8;
			this->bt_ger->Text = L"Gerarquia";
			this->bt_ger->UseVisualStyleBackColor = false;
			this->bt_ger->Click += gcnew System::EventHandler(this, &com_algoritmo::bt_ger_Click);
			// 
			// bt_rel
			// 
			this->bt_rel->BackColor = System::Drawing::Color::Black;
			this->bt_rel->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_rel->ForeColor = System::Drawing::Color::White;
			this->bt_rel->Location = System::Drawing::Point(10, 265);
			this->bt_rel->Name = L"bt_rel";
			this->bt_rel->Size = System::Drawing::Size(125, 25);
			this->bt_rel->TabIndex = 9;
			this->bt_rel->Text = L"Relacionales";
			this->bt_rel->UseVisualStyleBackColor = false;
			this->bt_rel->Click += gcnew System::EventHandler(this, &com_algoritmo::bt_rel_Click);
			// 
			// bt_log
			// 
			this->bt_log->BackColor = System::Drawing::Color::Black;
			this->bt_log->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_log->ForeColor = System::Drawing::Color::White;
			this->bt_log->Location = System::Drawing::Point(185, 235);
			this->bt_log->Name = L"bt_log";
			this->bt_log->Size = System::Drawing::Size(125, 25);
			this->bt_log->TabIndex = 10;
			this->bt_log->Text = L"Logicos";
			this->bt_log->UseVisualStyleBackColor = false;
			this->bt_log->Click += gcnew System::EventHandler(this, &com_algoritmo::bt_log_Click);
			// 
			// bt_ari
			// 
			this->bt_ari->BackColor = System::Drawing::Color::Black;
			this->bt_ari->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_ari->ForeColor = System::Drawing::Color::White;
			this->bt_ari->Location = System::Drawing::Point(10, 235);
			this->bt_ari->Name = L"bt_ari";
			this->bt_ari->Size = System::Drawing::Size(125, 25);
			this->bt_ari->TabIndex = 11;
			this->bt_ari->Text = L"Aritmeticos";
			this->bt_ari->UseVisualStyleBackColor = false;
			this->bt_ari->Click += gcnew System::EventHandler(this, &com_algoritmo::bt_ari_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(322, 173);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(650, 270);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &com_algoritmo::pictureBox1_Click);
			// 
			// com_algoritmo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(984, 457);
			this->Controls->Add(this->TEXTO);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->bt_ari);
			this->Controls->Add(this->bt_log);
			this->Controls->Add(this->bt_rel);
			this->Controls->Add(this->bt_ger);
			this->Controls->Add(this->bt_estruc);
			this->Controls->Add(this->bt_simple);
			this->Controls->Add(this->bt_ope);
			this->Controls->Add(this->bt_var);
			this->Controls->Add(this->bt_con);
			this->Controls->Add(this->bt_tip);
			this->Controls->Add(this->bt_ide);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"com_algoritmo";
			this->Text = L"com_algoritmo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bt_ide_Click(System::Object^ sender, System::EventArgs^ e) {
		this->TEXTO->Text = "Son nombres que se usamos para referirnos a variables, constantes, funciones o cualquier objeto definido por el usuario.";
	}
	private: System::Void bt_ope_Click(System::Object^ sender, System::EventArgs^ e) {

		this->TEXTO->Text = "Son símbolos que tienen una función predefinida (suma, resta, multiplicación etc.) y que recibe sus argumentos de manera infija.";
	}
	private: System::Void bt_tip_Click(System::Object^ sender, System::EventArgs^ e) {
		this->TEXTO->Text = "Son los datos a procesar por una computadora, estos pueden ser simples o estructurados";

	}
	private: System::Void bt_con_Click(System::Object^ sender, System::EventArgs^ e) {
		this->TEXTO->Text="Son datos que no cambian durante la ejecución de un programa. Existen tipos de constantes como tipos de datos, por lo tanto, puede haber constantes enteras, reales(flotantes), de carácter, de cadenas de caracteres, booleanas, etc.";
	}
	private: System::Void bt_var_Click(System::Object^ sender, System::EventArgs^ e) {
		this->TEXTO->Text = "Es un identificador que puede cambiar su valor durante la ejecución de un programa.";
	}
	private: System::Void bt_log_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Load("Logico.png");
		this->TEXTO->Text = "Son operadores que permiten conectar un par de propiedades, es decir, nos permiten obtener una respuesta lógica de la comparación de dos operaciones.";
	}
	private: System::Void bt_simple_Click(System::Object^ sender, System::EventArgs^ e) {
		this->TEXTO->Text = "Los datos simples se caracterizan porque ocupan sólo una casilla de memoria, por lo tanto una variable simple hace referencia a un único valor a la vez, dentro de este grupo de datos encontramos: \n Enteros \n Reales \n Caracteres \n Cadena de Caracteres \n Booleanos";
	}
	private: System::Void bt_estruc_Click(System::Object^ sender, System::EventArgs^ e) {
		this->TEXTO->Text = "Los datos estructurados se caracterizan por el hecho de que con un nombre se hace referencia a un grupo de casillas de memoria, dentro de este grupo de datos encontramos: \n Arreglos \n Cadena de Caracteres \n Registros";
}
private: System::Void bt_ari_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Load("Aritmetico.png");
	this->TEXTO->Text = "Son los operadores que permiten realizar operaciones aritmeticas";
}
private: System::Void bt_rel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TEXTO->Text = "Estos operadores permiten evaluar la relación entre un par de operando (constantes o variables) y permiten devolver valores de cierto o falso.";
	pictureBox1->Load("Relacionales.png");
}
private: System::Void bt_ger_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Load("Gerarquia.png");
	this->TEXTO->Text = "Se debe seguir un orden para la realización de operaciones";
}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
