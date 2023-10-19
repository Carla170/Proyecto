#pragma once

using namespace std;

namespace Proyecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de eje_algoritmo
	/// </summary>
	public ref class eje_algoritmo : public System::Windows::Forms::Form
	{
	public:
		eje_algoritmo(void)
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
		~eje_algoritmo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bt_eje1;
	protected:
	private: System::Windows::Forms::Button^ bt_eje2;
	private: System::Windows::Forms::Label^ Texto;
	private: System::Windows::Forms::Label^ Titulo;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(eje_algoritmo::typeid));
			this->bt_eje1 = (gcnew System::Windows::Forms::Button());
			this->bt_eje2 = (gcnew System::Windows::Forms::Button());
			this->Texto = (gcnew System::Windows::Forms::Label());
			this->Titulo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bt_eje1
			// 
			this->bt_eje1->BackColor = System::Drawing::Color::Black;
			this->bt_eje1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_eje1->ForeColor = System::Drawing::Color::White;
			this->bt_eje1->Location = System::Drawing::Point(90, 50);
			this->bt_eje1->Name = L"bt_eje1";
			this->bt_eje1->Size = System::Drawing::Size(150, 50);
			this->bt_eje1->TabIndex = 0;
			this->bt_eje1->Text = L"Ejemplo 1";
			this->bt_eje1->UseVisualStyleBackColor = false;
			this->bt_eje1->Click += gcnew System::EventHandler(this, &eje_algoritmo::bt_eje1_Click);
			// 
			// bt_eje2
			// 
			this->bt_eje2->BackColor = System::Drawing::Color::Black;
			this->bt_eje2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_eje2->ForeColor = System::Drawing::Color::White;
			this->bt_eje2->Location = System::Drawing::Point(330, 50);
			this->bt_eje2->Name = L"bt_eje2";
			this->bt_eje2->Size = System::Drawing::Size(150, 50);
			this->bt_eje2->TabIndex = 1;
			this->bt_eje2->Text = L"Ejemplo 2";
			this->bt_eje2->UseVisualStyleBackColor = false;
			this->bt_eje2->Click += gcnew System::EventHandler(this, &eje_algoritmo::bt_eje2_Click);
			// 
			// Texto
			// 
			this->Texto->AutoSize = true;
			this->Texto->BackColor = System::Drawing::Color::Transparent;
			this->Texto->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Texto->Location = System::Drawing::Point(85, 170);
			this->Texto->MaximumSize = System::Drawing::Size(400, 300);
			this->Texto->MinimumSize = System::Drawing::Size(400, 300);
			this->Texto->Name = L"Texto";
			this->Texto->Size = System::Drawing::Size(400, 300);
			this->Texto->TabIndex = 2;
			this->Texto->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Texto->Click += gcnew System::EventHandler(this, &eje_algoritmo::label1_Click);
			// 
			// Titulo
			// 
			this->Titulo->AutoSize = true;
			this->Titulo->BackColor = System::Drawing::Color::Transparent;
			this->Titulo->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Titulo->Location = System::Drawing::Point(135, 110);
			this->Titulo->MaximumSize = System::Drawing::Size(300, 50);
			this->Titulo->MinimumSize = System::Drawing::Size(300, 50);
			this->Titulo->Name = L"Titulo";
			this->Titulo->Size = System::Drawing::Size(300, 50);
			this->Titulo->TabIndex = 3;
			this->Titulo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Titulo->Click += gcnew System::EventHandler(this, &eje_algoritmo::Titulo_Click);
			// 
			// eje_algoritmo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(570, 480);
			this->Controls->Add(this->Titulo);
			this->Controls->Add(this->Texto);
			this->Controls->Add(this->bt_eje2);
			this->Controls->Add(this->bt_eje1);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"eje_algoritmo";
			this->Text = L"eje_algoritmo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bt_eje1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Titulo->Text = "Algoritmo para elegir unos zapatos de fiesta";
		this->Texto->Text = " 1.INICIO. \n 2.Entrar a la tienda y buscar la sección de zapatos de caballero. \n 3.Tomar un par de zapatos. ¿Son zapatos de fiesta ? \n SI : (ir al paso 5) – NO : (volver al paso 3) \n 5. ¿Hay de la talla adecuada ? \n SI : (ir al paso 6) – NO : (volver al paso 3) \n 6. ¿El precio es pagable ? \n SI : (ir al paso 7) – NO : (volver al paso 3) \n 7. Comprar el par de zapatos elegido. \n 8. FIN";
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void bt_eje2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Titulo->Text = "Algoritmo para calcular el área de un triángulo rectángulo";
		this->Texto->Text = " 1.INICIO \n 2.Hallar las medidas de la base(b) y altura(h) \n 3.Multiplicar: base por altura(b x h) \n 4.Dividir entre 2 el resultado(b x h) / 2 \n 5.FIN";
	}
	
	private: System::Void Titulo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
