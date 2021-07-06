
struct rgALuno
{
    char Nome[35];
    char Sexo;
    int Faltas;
        float Media;
};
// b)
    struct rgPessoaFisica
{
    char Nome[35];
    char Sexo;
    int Dependentes;
    float RendaAnual;
};
// c)
struct rgPaciente
{
    char Nome[30];
    char Sexo;
    int Idade;
    float Peso;
    int AlturaCM;
};
// d)
struct Data
{
    int Dia;
    int Mes;
    int Ano;
};

struct rgLancamento
{
    struct Data data;
    char Tipo;
    char HistLanc [35];
    float Valor;
};