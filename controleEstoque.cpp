#include #define T 2
using namespace std;

struct Tipo_Produtos{
int cod_TP;
string descricao_TP;
};


struct Produtos{
int cod_P;
string descricao_P;
int tipo_Produto_P;
int codigo_fornecedor_P;
int qtde_Estoque_P;
int estoque_Minimo_P;
int estoque_Maximo_P;
float valor_Unitario_P;
};


struct Cidades{
int cod_C;
string descricao_C;
string uf_C;
};

struct Fornecedores{
int cod_F;
string nome_F;
string endereco_F;
int telefone_F;
int codigo_cidade_F;
int cnpj_F;
};



void leitura_TP(Tipo_Produtos tp[]{

for(int i=0; i cout << "\nCADASTRAR TIPOS PRODUTOS\n";
cout << "Codigo: ";
cin>> tp[i].cod_TP;
cout << "Descricao: ";
cin>> tp[i].descricao_TP;
}
}



void leitura_P(Produto p[T]){

for(int i=0; i cout << "\nCADASTRAR PRODUTOS\n";
cout << "Codigo: ";
cin>> p[i].cod_P;
cout << "Descricao: ";
cin>> p[i].descricao_P;
cout << "Tipo Produto: ";
cin>> p[i].tipo_Produto_P;
cout << "Codigo Fornecedor: ";
cin>> p[i].codigo_fornecedor_P;
cout << "Quantidade em estoque: ";
cin>> p[i].qtde_Estoque_P;
cout << "Estoque minimo: ";
cin>> p[i].estoque_Minimo_P;
cout << "Estoque maximo: ";
cin>> p[i].estoque_Maximo_P;
cout << "Valor unitario: ";
cin>> p[i].valor_Unitario_P;
}
}



void leitura_C(Cidade c[]{

for(int i=0; i cout << "\nCADASTRAR CIDADES\n";
cout << "Codigo: ";
cin>> c[i].cod_C;
cout << "Descricao: ";
cin>> c[i].descricao_C;
cout << "UF: ";
cin>> c[i].uf_C;

}
}



void leitura_F(Fornecedor f[]{

for(int i=0; i cout << "\nCADASTRAR FORNECEDORES\n";
cout << "Codigo: ";
cin>> f[i].cod_F;
cout << "Nome: ";
cin>> f[i].nome_F;
cout << "Endereco: ";
cin>> f[i].endereco_F;
cout << "Telefone: ";
cin>> f[i].telefone_F;
cout << "Codigo Cidade: ";
cin>> f[i].codigo_cidade_F;
cout << "CNPJ: ";
cin>> f[i].cnpj_F;

}
}
