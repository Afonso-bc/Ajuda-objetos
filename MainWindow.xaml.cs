using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace Classe_Carro_Datagrid
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        List<Carro> osMeuscarros; 
        public MainWindow()
        {
            InitializeComponent();

            osMeuscarros = new List<Carro>();
        }
        private void btn1_Click(object sender, RoutedEventArgs e)
        {
            Carro novo = new Carro();

            novo.Cilindrada = int.Parse(textbox2.Text);
            novo.Marca = textbox1.Text;

            osMeuscarros.Add(novo);
            dataGrid1.ItemsSource = null;
            dataGrid1.ItemsSource = osMeuscarros;
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            dataGrid1.ItemsSource = osMeuscarros;
        }
    }
}
