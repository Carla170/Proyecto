#pragma once

#include "eje_algoritmo.h"
#include "con_algoritmo.h"

using namespace std;

namespace Proyecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Algoritmo
	/// </summary>
	public ref class Algoritmo : public System::Windows::Forms::Form
	{
	public:
		Algoritmo(void)
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
		~Algoritmo()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ bt_eje;
	private: System::Windows::Forms::Button^ bt_con;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Algoritmo::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bt_eje = (gcnew System::Windows::Forms::Button());
			this->bt_con = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Location = System::Drawing::Point(318, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(570, 480);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Algoritmo::panel1_Paint);
			// 
			// bt_eje
			// 
			this->bt_eje->BackColor = System::Drawing::Color::Black;
			this->bt_eje->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_eje->ForeColor = System::Drawing::Color::White;
			this->bt_eje->Location = System::Drawing::Point(82, 225);
			this->bt_eje->Name = L"bt_eje";
			this->bt_eje->Size = System::Drawing::Size(150, 50);
			this->bt_eje->TabIndex = 2;
			this->bt_eje->Text = L"Ejemplos";
			this->bt_eje->UseVisualStyleBackColor = false;
			this->bt_eje->Click += gcnew System::EventHandler(this, &Algoritmo::bt_eje_Click);
			// 
			// bt_con
			// 
			this->bt_con->BackColor = System::Drawing::Color::Black;
			this->bt_con->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_con->ForeColor = System::Drawing::Color::White;
			this->bt_con->Location = System::Drawing::Point(82, 131);
			this->bt_con->Name = L"bt_con";
			this->bt_con->Size = System::Drawing::Size(150, 50);
			this->bt_con->TabIndex = 3;
			this->bt_con->Text = L"Conceptos";
			this->bt_con->UseVisualStyleBackColor = false;
			this->bt_con->Click += gcnew System::EventHandler(this, &Algoritmo::bt_con_Click);
			// 
			// Algoritmo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(899, 511);
			this->Controls->Add(this->bt_con);
			this->Controls->Add(this->bt_eje);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Algoritmo";
			this->Text = L"Algoritmo";
			this->ResumeLayout(false);

		}
#pragma endregion

		template<class T>
		void AbrirPanel(T Formhijo)
		{
			if (this->panel1->Controls->Count > 0)
				this->panel1->Controls->RemoveAt(0);
			Formhijo->TopLevel = false;
			Formhijo->Dock = DockStyle::Fill;
			this->panel1->Controls->Add(Formhijo);
			this->panel1->Tag = Formhijo;
			Formhijo->Show();
		}

	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void bt_con_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Proyecto::con_algoritmo);
	}
	private: System::Void bt_eje_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew Proyecto::eje_algoritmo);
	}
	};
}