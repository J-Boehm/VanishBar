   M S B A M L   `   `   `  ����K  GVanishBar, Version=2.0.5538.29996, Culture=neutral, PublicKeyToken=null)clr-namespace:VanishBarUIVanishBarUI  5   	       VanishBarUI.MainWindow   5   	   \ XPresentationFramework, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35R NWindowsBase, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35W SPresentationCore, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35D 9http://schemas.microsoft.com/winfx/2006/xaml/presentation    5   	   )localclr-namespace:VanishBarUI    5   	   R NSystem.Xaml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	     � Title$  	VanishBar��5   	   $	��160��6   $	��240��6(    � 
ResizeMode$ NoResize=�64    � WindowStartupLocation$ CenterScreen=�6J    � 	Resources 5       �� Source�� 5   
   $  UiThemes/GenericTheme.xaml?�6   %     J� CommandBindings 5	      )  #System.Windows.Input.CommandBinding  5   
   -   5           Command$ ApplicationCommands.Close��5      6[     5   
   -   5           VanishBarUI.MainWindow   Minimize# Z 5      6i     5   
   -   5           HideTaskbar# Z 5      6o     5   
   -   5        	   ShowTaskbar# Z	 5      6o   '  !System.Windows.Shell.WindowChrome
   WindowChrome
 5        5   
   -   5        mwChrome��   NonClientFrameEdges$
 None=�5   )      CaptionHeight$ 32Q�6D      UseAeroCaptionButtons . 6W   ��5      �� 5   
    �� 
TargetType" �6   .R�5      � .+�5      �� ���	#FF494949���	#FF2B2B2B �� CornerRadius$ 1��6H   $��4q�6Y   ._�5      �  � RowDefinitions 5      �� 5      ��6,   ��  �� ElementName$ mwChrome�� �� Path$ CaptionHeight��� 5      .+�5      �� ���	#FF2B2B2B._�5      � .+�5   "   �� $��4,0,0,0q�6-   $��Center=�6>   $
��Left=�6Y   .+�5    &   �� #��z  60   
�������$��14(�6e   $��Segoe UI)�6s   �� 5!   &   $��Version 2.1��60   
�������$��12(�6Y   $��Segoe UI)�6g    J� Opacity$	 0.2Q�6}   $��0,-5,0,0q�6�   5"   #   5#      5$      �� 5%      $��1��6+   $��Content��68   5&      5'      �� 5(       �� Orientation$ 
Horizontal=�6   $��0,0,4,0q�66   $��Right=�6G   $	��Top=�6c   .+�5)      �� $��0��6      CaptionButton#��[  6.   #��Z 6U      IsHitTestVisibleInChrome . 6�   �� 5*      $��r��6     PrimaryCaptionButton#��[ 6.   $��ApplicationCommands.Close��6\    . 6�   5+      5,      5-      .��5/      � .+�50   
   �� $��Center=�6   $��Center=�62   .+�51      �� $ 
Horizontal=�6   .+�52      �� $�� Hide taskbar��6   $/��)Fonts/FontAwesome-Webfont.ttf#FontAwesome)�69   $	��100��53      $��48��6!   #��Z 54      �� 55      $�� Show taskbar��6   $/��)Fonts/FontAwesome-Webfont.ttf#FontAwesome)�69   $	��100��56      $��48��6!   #��Z	 57      58      59      5:      5;      