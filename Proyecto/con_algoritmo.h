#pragma once

#include "com_algoritmo.h"

namespace Proyecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de con_algoritmo
	/// </summary>
	public ref class con_algoritmo : public System::Windows::Forms::Form
	{
	public:
		con_algoritmo(void)
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
		~con_algoritmo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bt_definicion;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ bt_partes;

	private: System::Windows::Forms::Button^ bt_caracter;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ bt_tipos;
	private: System::Windows::Forms::Button^ bt_metodologia;
	private: System::Windows::Forms::Button^ bt_componentes;



	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(con_algoritmo::typeid));
			this->bt_definicion = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bt_partes = (gcnew System::Windows::Forms::Button());
			this->bt_caracter = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->bt_tipos = (gcnew System::Windows::Forms::Button());
			this->bt_metodologia = (gcnew System::Windows::Forms::Button());
			this->bt_componentes = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bt_definicion
			// 
			this->bt_definicion->BackColor = System::Drawing::Color::Black;
			this->bt_definicion->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_definicion->ForeColor = System::Drawing::Color::White;
			this->bt_definicion->Location = System::Drawing::Point(5, 10);
			this->bt_definicion->Name = L"bt_definicion";
			this->bt_definicion->Size = System::Drawing::Size(205, 50);
			this->bt_definicion->TabIndex = 0;
			this->bt_definicion->Text = L"Definicion";
			this->bt_definicion->UseVisualStyleBackColor = false;
			this->bt_definicion->Click += gcnew System::EventHandler(this, &con_algoritmo::bt_definicion_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(215, 10);
			this->label1->MaximumSize = System::Drawing::Size(350, 100);
			this->label1->MinimumSize = System::Drawing::Size(350, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(350, 100);
			this->label1->TabIndex = 1;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Click += gcnew System::EventHandler(this, &con_algoritmo::label1_Click);
			// 
			// bt_partes
			// 
			this->bt_partes->BackColor = System::Drawing::Color::Black;
			this->bt_partes->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_partes->ForeColor = System::Drawing::Color::White;
			this->bt_partes->Location = System::Drawing::Point(5, 130);
			this->bt_partes->Name = L"bt_partes";
			this->bt_partes->Size = System::Drawing::Size(205, 50);
			this->bt_partes->TabIndex = 2;
			this->bt_partes->Text = L"Partes";
			this->bt_partes->UseVisualStyleBackColor = false;
			this->bt_partes->Click += gcnew System::EventHandler(this, &con_algoritmo::bt_partes_Click);
			// 
			// bt_caracter
			// 
			this->bt_caracter->BackColor = System::Drawing::Color::Black;
			this->bt_caracter->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_caracter->ForeColor = System::Drawing::Color::White;
			this->bt_caracter->Location = System::Drawing::Point(5, 70);
			this->bt_caracter->Name = L"bt_caracter";
			this->bt_caracter->Size = System::Drawing::Size(205, 50);
			this->bt_caracter->TabIndex = 3;
			this->bt_caracter->Text = L"Caracteristicas";
			this->bt_caracter->UseVisualStyleBackColor = false;
			this->bt_caracter->Click += gcnew System::EventHandler(this, &con_algoritmo::bt_caracter_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(215, 120);
			this->label2->MaximumSize = System::Drawing::Size(350, 100);
			this->label2->MinimumSize = System::Drawing::Size(350, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(350, 100);
			this->label2->TabIndex = 4;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(215, 230);
			this->label3->MaximumSize = System::Drawing::Size(350, 100);
			this->label3->MinimumSize = System::Drawing::Size(350, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(350, 100);
			this->label3->TabIndex = 5;
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(215, 340);
			this->label4->MaximumSize = System::Drawing::Size(350, 100);
			this->label4->MinimumSize = System::Drawing::Size(350, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(350, 100);
			this->label4->TabIndex = 6;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label4->Click += gcnew System::EventHandler(this, &con_algoritmo::label4_Click);
			// 
			// bt_tipos
			// 
			this->bt_tipos->BackColor = System::Drawing::Color::Black;
			this->bt_tipos->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_tipos->ForeColor = System::Drawing::Color::White;
			this->bt_tipos->Location = System::Drawing::Point(5, 190);
			this->bt_tipos->Name = L"bt_tipos";
			this->bt_tipos->Size = System::Drawing::Size(205, 50);
			this->bt_tipos->TabIndex = 7;
			this->bt_tipos->Text = L"Tipos";
			this->bt_tipos->UseVisualStyleBackColor = false;
			this->bt_tipos->Click += gcnew System::EventHandler(this, &con_algoritmo::bt_tipos_Click);
			// 
			// bt_metodologia
			// 
			this->bt_metodologia->BackColor = System::Drawing::Color::Black;
			this->bt_metodologia->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_metodologia->ForeColor = System::Drawing::Color::White;
			this->bt_metodologia->Location = System::Drawing::Point(5, 250);
			this->bt_metodologia->Name = L"bt_metodologia";
			this->bt_metodologia->Size = System::Drawing::Size(205, 50);
			this->bt_metodologia->TabIndex = 8;
			this->bt_metodologia->Text = L"Metodologia";
			this->bt_metodologia->UseVisualStyleBackColor = false;
			this->bt_metodologia->Click += gcnew System::EventHandler(this, &con_algoritmo::bt_metodologia_Click);
			// 
			// bt_componentes
			// 
			this->bt_componentes->BackColor = System::Drawing::Color::Black;
			this->bt_componentes->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_componentes->ForeColor = System::Drawing::Color::White;
			this->bt_componentes->Location = System::Drawing::Point(5, 310);
			this->bt_componentes->Name = L"bt_componentes";
			this->bt_componentes->Size = System::Drawing::Size(205, 50);
			this->bt_componentes->TabIndex = 9;
			this->bt_componentes->Text = L"Componentes";
			this->bt_componentes->UseVisualStyleBackColor = false;
			this->bt_componentes->Click += gcnew System::EventHandler(this, &con_algoritmo::bt_componentes_Click);
			// 
			// con_algoritmo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(570, 480);
			this->Controls->Add(this->bt_componentes);
			this->Controls->Add(this->bt_metodologia);
			this->Controls->Add(this->bt_tipos);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->bt_caracter);
			this->Controls->Add(this->bt_partes);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bt_definicion);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"con_algoritmo";
			this->Text = L"con_algoritmo";
			this->Load += gcnew System::EventHandler(this, &con_algoritmo::con_algoritmo_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bt_definicion_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "Se trata de conjuntos ordenados y finitos de pasos, que nos permiten resolver un problema o tomar una decisión.";
		this->label2->Text = " ";
		this->label3->Text = " ";
		this->label4->Text = " ";
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void con_algoritmo_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bt_caracter_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "PRECISO: Tiene que resolver el problema sin errores.";
		this->label2->Text = "DEFINIDO: Si se ejecuta el algoritmo varias veces, los datos de salida deben ser los mismos en cada repetición";
		this->label3->Text = "FINITO: Debe tener un incio y un final.";
		this->label4->Text = "LEGIBLE: Cualquier persona que vea el algoritmo debe ser capaz de comprenderlo.";
	}
	private: System::Void bt_partes_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "ENTRADA: Son los datos que se le dan al algoritmo.";
		this->label2->Text = "PROCESO: Operaciones que se hacen con los datos.";
		this->label3->Text = "SALIDA: Resultado final que se obtiene de las operaciones.";
		this->label4->Text = " ";
	}
	private: System::Void bt_atras_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void bt_tipos_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "CUALITATIVOS: Se trata de un algoritmo en cuya resolución no intervienen cálculos numéricos, sino secuencias lógicas y/o formales.";
		this->label2->Text = "CUANTITATIVOS Todo lo contrario, es un algoritmo que depende de cálculos matemáticos para dar con su resolución.";
		this->label3->Text = "COMPUTACIONALES: Un algoritmo cuya resolución depende del cálculo, y que puede ser desarrollado por una calculadora o computadora sin dificultades.";
		this->label4->Text = "NO COMPUTACIONALES Aquellos que no requieren de los procesos de un computador para resolverse, o cuyos pasos son exclusivos para la resolución por parte de un ser humano.";
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bt_metodologia_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "DEFINICION: ¿Cuál es el problema en concreto?, visualizar la delimitación del problema, ¿Hasta dónde abarcará la solución del problema? y si es posible resolver el algoritmo o no.";
		this->label2->Text = "ANALISIS: Esta fase tiene el objetivo de dividir el problema en sus componentes y examinar de qué manera pueden unirse.";
		this->label3->Text = "DISEÑO: Haciendo uso de alternativas de solución como lo son diagramas de flujo y pseudocódigo se indican los pasos que deberá seguir el algoritmo para obtener la solución del problema.";
		this->label4->Text = "VERIFICACION: Nos permite saber si el algoritmo complio su objetivo, para realizar la comprobación se le dan variables de entrada al algoritmo y se observan los resultados que arroja.";
	}
	private: System::Void bt_componentes_Click(System::Object^ sender, System::EventArgs^ e) {
		com_algoritmo^ F2 = gcnew com_algoritmo();
		F2->ShowDialog();
	}
	};
}
