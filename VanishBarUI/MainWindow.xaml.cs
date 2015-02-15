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
using VanDLL;

namespace VanishBarUI
{
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        #region CommandBindings

        //Close command
        void Close_CanExecute(object sender, CanExecuteRoutedEventArgs e) { e.CanExecute = true; }
        void Close_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            this.Close();
        }

        //Minimize command
        public static RoutedCommand Minimize = new RoutedCommand();
        void Minimize_CanExecute(object sender, CanExecuteRoutedEventArgs e) { e.CanExecute = true; }
        void Minimize_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            this.WindowState = System.Windows.WindowState.Minimized;
        }

        //Hide command
        public static RoutedCommand HideTaskbar = new RoutedCommand();
        void HideTaskbar_CanExecute(object sender, CanExecuteRoutedEventArgs e) { e.CanExecute = VanishCommands.CheckTaskbar(); }
        void HideTaskbar_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            VanishCommands.HideTaskbar();
        }

        //Show command
        public static RoutedCommand ShowTaskbar = new RoutedCommand();
        void ShowTaskbar_CanExecute(object sender, CanExecuteRoutedEventArgs e) { e.CanExecute = !VanishCommands.CheckTaskbar(); }
        void ShowTaskbar_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            VanishCommands.ShowTaskbar();
        }

        #endregion
    }
}
