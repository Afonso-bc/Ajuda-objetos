using System;
using System.Collections.Generic;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace Navegaçao_páginas
{
    /// <summary>
    /// Interaction logic for RelatorioDespesas.xaml
    /// </summary>
    public partial class RelatorioDespesas : Page
    {
        public RelatorioDespesas()
        {
            InitializeComponent();
        }
        // Construtor personalizado para exibir as despesas
        public RelatorioDespesas(object data) : this()
        {
            // Vincular a dados de relatórios de despesas
            this.DataContext = data;

        }
    }
}
