#pragma once
#include "Algoritmo.h"
#include "Diagrama.h"
#include "Pseudocodigo.h"
#include "Introduccion.h"
#include "Lenguaje.h"
#include "Nota.h"
namespace Proyecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:
		Inicio(void)
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
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bt_algoritmo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ bt_diagrama;
	private: System::Windows::Forms::Button^ bt_pseudocodigo;
	private: System::Windows::Forms::Button^ bt_lenguaje;




	private: System::Windows::Forms::Button^ bt_introduccion;
	private: System::Windows::Forms::Button^ bt_evaluacion;

	private: System::Windows::Forms::Button^ bt_notas;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Inicio::typeid));
			this->bt_algoritmo = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bt_diagrama = (gcnew System::Windows::Forms::Button());
			this->bt_pseudocodigo = (gcnew System::Windows::Forms::Button());
			this->bt_lenguaje = (gcnew System::Windows::Forms::Button());
			this->bt_introduccion = (gcnew System::Windows::Forms::Button());
			this->bt_evaluacion = (gcnew System::Windows::Forms::Button());
			this->bt_notas = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bt_algoritmo
			// 
			this->bt_algoritmo->BackColor = System::Drawing::Color::Black;
			this->bt_algoritmo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bt_algoritmo->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_algoritmo->ForeColor = System::Drawing::SystemColors::Window;
			this->bt_algoritmo->Location = System::Drawing::Point(15, 100);
			this->bt_algoritmo->Name = L"bt_algoritmo";
			this->bt_algoritmo->Size = System::Drawing::Size(375, 40);
			this->bt_algoritmo->TabIndex = 0;
			this->bt_algoritmo->Text = L"Algoritmo";
			this->bt_algoritmo->UseVisualStyleBackColor = false;
			this->bt_algoritmo->Click += gcnew System::EventHandler(this, &Inicio::bt_algoritmo_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Baby Monkey", 50.24999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(15, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(509, 65);
			this->label1->TabIndex = 1;
			this->label1->Text = L"TEMAS DE ESTUDIO";
			// 
			// bt_diagrama
			// 
			this->bt_diagrama->BackColor = System::Drawing::Color::Black;
			this->bt_diagrama->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bt_diagrama->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_diagrama->ForeColor = System::Drawing::SystemColors::Window;
			this->bt_diagrama->Location = System::Drawing::Point(115, 170);
			this->bt_diagrama->Name = L"bt_diagrama";
			this->bt_diagrama->Size = System::Drawing::Size(375, 40);
			this->bt_diagrama->TabIndex = 2;
			this->bt_diagrama->Text = L"Diagrama de Flujo";
			this->bt_diagrama->UseVisualStyleBackColor = false;
			this->bt_diagrama->Click += gcnew System::EventHandler(this, &Inicio::bt_diagrama_Click);
			// 
			// bt_pseudocodigo
			// 
			this->bt_pseudocodigo->BackColor = System::Drawing::Color::Black;
			this->bt_pseudocodigo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bt_pseudocodigo->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_pseudocodigo->ForeColor = System::Drawing::SystemColors::Window;
			this->bt_pseudocodigo->Location = System::Drawing::Point(15, 240);
			this->bt_pseudocodigo->Name = L"bt_pseudocodigo";
			this->bt_pseudocodigo->Size = System::Drawing::Size(375, 40);
			this->bt_pseudocodigo->TabIndex = 3;
			this->bt_pseudocodigo->Text = L"Pseudocódigo";
			this->bt_pseudocodigo->UseVisualStyleBackColor = false;
			this->bt_pseudocodigo->Click += gcnew System::EventHandler(this, &Inicio::bt_pseudocodigo_Click);
			// 
			// bt_lenguaje
			// 
			this->bt_lenguaje->BackColor = System::Drawing::Color::Black;
			this->bt_lenguaje->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bt_lenguaje->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_lenguaje->ForeColor = System::Drawing::SystemColors::Window;
			this->bt_lenguaje->Location = System::Drawing::Point(15, 380);
			this->bt_lenguaje->Name = L"bt_lenguaje";
			this->bt_lenguaje->Size = System::Drawing::Size(375, 40);
			this->bt_lenguaje->TabIndex = 4;
			this->bt_lenguaje->Text = L"Lenguaje C++";
			this->bt_lenguaje->UseVisualStyleBackColor = false;
			this->bt_lenguaje->Click += gcnew System::EventHandler(this, &Inicio::bt_lenguaje_Click);
			// 
			// bt_introduccion
			// 
			this->bt_introduccion->BackColor = System::Drawing::Color::Black;
			this->bt_introduccion->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bt_introduccion->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_introduccion->ForeColor = System::Drawing::SystemColors::Window;
			this->bt_introduccion->Location = System::Drawing::Point(115, 310);
			this->bt_introduccion->Name = L"bt_introduccion";
			this->bt_introduccion->Size = System::Drawing::Size(375, 40);
			this->bt_introduccion->TabIndex = 5;
			this->bt_introduccion->Text = L"Introducción a Programación";
			this->bt_introduccion->UseVisualStyleBackColor = false;
			this->bt_introduccion->Click += gcnew System::EventHandler(this, &Inicio::bt_introduccion_Click);
			// 
			// bt_evaluacion
			// 
			this->bt_evaluacion->BackColor = System::Drawing::Color::White;
			this->bt_evaluacion->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_evaluacion->ForeColor = System::Drawing::Color::Black;
			this->bt_evaluacion->Location = System::Drawing::Point(586, 300);
			this->bt_evaluacion->Name = L"bt_evaluacion";
			this->bt_evaluacion->Size = System::Drawing::Size(150, 50);
			this->bt_evaluacion->TabIndex = 6;
			this->bt_evaluacion->Text = L"Evaluación";
			this->bt_evaluacion->UseVisualStyleBackColor = false;
			// 
			// bt_notas
			// 
			this->bt_notas->BackColor = System::Drawing::Color::White;
			this->bt_notas->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_notas->ForeColor = System::Drawing::Color::Black;
			this->bt_notas->Location = System::Drawing::Point(586, 356);
			this->bt_notas->Name = L"bt_notas";
			this->bt_notas->Size = System::Drawing::Size(150, 50);
			this->bt_notas->TabIndex = 7;
			this->bt_notas->Text = L"Notas";
			this->bt_notas->UseVisualStyleBackColor = false;
			this->bt_notas->Click += gcnew System::EventHandler(this, &Inicio::bt_notas_Click);
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->bt_notas);
			this->Controls->Add(this->bt_evaluacion);
			this->Controls->Add(this->bt_introduccion);
			this->Controls->Add(this->bt_lenguaje);
			this->Controls->Add(this->bt_pseudocodigo);
			this->Controls->Add(this->bt_diagrama);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bt_algoritmo);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Inicio";
			this->Text = L"Inicio";
			this->Load += gcnew System::EventHandler(this, &Inicio::Inicio_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Inicio_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void bt_algoritmo_Click(System::Object^ sender, System::EventArgs^ e) {
		Algoritmo^ F2 = gcnew Algoritmo();
		F2->ShowDialog();
	}

	private: System::Void bt_diagrama_Click(System::Object^ sender, System::EventArgs^ e) {
		Diagrama^ F2 = gcnew Diagrama();
		F2->ShowDialog();
	}

	private: System::Void bt_pseudocodigo_Click(System::Object^ sender, System::EventArgs^ e) {
		Pseudocodigo^ F2 = gcnew Pseudocodigo();
		F2->ShowDialog();
	}

	private: System::Void bt_introduccion_Click(System::Object^ sender, System::EventArgs^ e) {
		Introduccion^ F2 = gcnew Introduccion();
		F2->ShowDialog();
	}

	private: System::Void bt_lenguaje_Click(System::Object^ sender, System::EventArgs^ e) {
		Lenguaje^ F2 = gcnew Lenguaje();
		F2->ShowDialog();
	}
private: System::Void bt_notas_Click(System::Object^ sender, System::EventArgs^ e) {
	Nota^ F2 = gcnew Nota();
	F2->ShowDialog();
}
};
}
