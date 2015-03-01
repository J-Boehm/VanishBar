using System;
using System.Collections.Generic;
using System.Configuration;
using System.Data;
using System.Linq;
using System.Threading.Tasks;
using System.Windows;
using VanDLL;

namespace VanishBarUI
{
    public partial class App : Application
    {
        void App_OnStartup(object sender, StartupEventArgs e)
        {
            if (e.Args.Length > 0)
            {
                if (e.Args[0] == "-h")
                    VanishCommands.HideTaskbar();
                else if (e.Args[0] == "-s")
                    VanishCommands.ShowTaskbar();
                Application.Current.Shutdown();
            }
            else
                new MainWindow().Show();
        }
    }
}
