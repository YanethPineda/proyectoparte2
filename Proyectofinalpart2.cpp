#include <iostream>
using namespace std;

void buscar_y_reemplazar (string& frase, string buscar, string rempl){
	int pos = frase.find(buscar);
	while  (pos != -1){
		frase.replace(pos, buscar.size(), rempl);
		pos = frase.find(buscar, pos + rempl.size());
	}
}
	int main() {
		
		string palabra;
		palabra+="int main (){ \n";
		palabra+="string continuar; \n";
		palabra+="cout<< ""Desea continuarsi/no: \n";
		palabra+="cin >>continuar; \n";
		palabra+="if (continuar== ""si""){ \n";
		palabra+="cout<<""Gracias..<<endl; \n";
		palabra+="}else{ \n";
		palabra+="exit(1); \n";
		palabra+="}return 0; \n";
		palabra+="} \n" ;
		
		buscar_y_reemplazar(palabra, "()","()");
		buscar_y_reemplazar(palabra, "if ","si ");
		buscar_y_reemplazar(palabra, "void ","vacio ");
		buscar_y_reemplazar(palabra, "and ","y ");
		buscar_y_reemplazar(palabra, "int ","entero ");
		buscar_y_reemplazar(palabra, "main ","principal ");
		buscar_y_reemplazar(palabra, "string","cadena");
		buscar_y_reemplazar(palabra, "cout","escribir");
		buscar_y_reemplazar(palabra, "cin ","leer ");
		buscar_y_reemplazar(palabra, "float","flotadora");
		buscar_y_reemplazar(palabra, "for","por");
		buscar_y_reemplazar(palabra, "friend","amigo");
		buscar_y_reemplazar(palabra, "goto","ir a");
		buscar_y_reemplazar(palabra, "if","si");
		buscar_y_reemplazar(palabra, "inline","en_linea");
		buscar_y_reemplazar(palabra, "int","en_t");
		buscar_y_reemplazar(palabra, "long","largo");
		buscar_y_reemplazar(palabra, "mutable","mutable");
		buscar_y_reemplazar(palabra, "namespace","espacio_de_nombres");
		buscar_y_reemplazar(palabra, "new","nuevo");
		buscar_y_reemplazar(palabra, "operator","operador");
		buscar_y_reemplazar(palabra, "asm","asm");
		buscar_y_reemplazar(palabra, "auto","auto");
		buscar_y_reemplazar(palabra, "bool","booleana");
		buscar_y_reemplazar(palabra, "break","romper");
		buscar_y_reemplazar(palabra, "case","caso");
		buscar_y_reemplazar(palabra, "catch","capturar");
		buscar_y_reemplazar(palabra, "char","cadena");
		buscar_y_reemplazar(palabra, "class","clase");
		buscar_y_reemplazar(palabra, "const","constante");
		buscar_y_reemplazar(palabra, "const_cast","caso_constante ");
		buscar_y_reemplazar(palabra, "private","privado");
		buscar_y_reemplazar(palabra, "protected","protegido");
		buscar_y_reemplazar(palabra, "public","publico");
		buscar_y_reemplazar(palabra, "register","registro");
		buscar_y_reemplazar(palabra, "Reinterpret_cast","Reinterpretar_Caso");
		buscar_y_reemplazar(palabra, "return","regreso");
		buscar_y_reemplazar(palabra, "short","peque�o");
		buscar_y_reemplazar(palabra, "signed","firmado");
		buscar_y_reemplazar(palabra, "sizeof","tama�o_de");
		buscar_y_reemplazar(palabra, "static","estatico");
		buscar_y_reemplazar(palabra, "static_cast","elenco_estatico");
		buscar_y_reemplazar(palabra, "struct","estructura");
		buscar_y_reemplazar(palabra, "switch","cambiar");
		buscar_y_reemplazar(palabra, "template","planilla");
		buscar_y_reemplazar(palabra, "this","esto");
		buscar_y_reemplazar(palabra, "throw","lanzar");
		buscar_y_reemplazar(palabra, "true","verdadero");
		buscar_y_reemplazar(palabra, "try","tratar");
		buscar_y_reemplazar(palabra, "typedef","tipo_def");
		buscar_y_reemplazar(palabra, "typename","tipo_nombre");
		buscar_y_reemplazar(palabra, "union","union");
		buscar_y_reemplazar(palabra, "unsigned","no_firmado");
		buscar_y_reemplazar(palabra, "using","utilizando");
		buscar_y_reemplazar(palabra, "virtual","virtual");
		buscar_y_reemplazar(palabra, "void","vacio");
		buscar_y_reemplazar(palabra, "volatile","volatil");
		buscar_y_reemplazar(palabra, "while","mientras");	
		cout << palabra << endl;
	}

