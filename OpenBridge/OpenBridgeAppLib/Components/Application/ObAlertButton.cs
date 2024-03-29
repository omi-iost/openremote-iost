///////////////////////////////////////////////////////////
//  ObAlertButton.cs
//  Implementation of the Class ObAlertButton
//  Generated by Enterprise Architect
//  Created on:      25-Feb-2024 22:26:32
//  Original author: ØyvindMisje
///////////////////////////////////////////////////////////

using System;
using System.Collections.Generic;
using System.Text;
using System.IO;
using OpenBridgeAppLib.Palettes;

namespace OpenBridgeAppLib.Components.Application 
{
	public class ObAlertButton 
    {
		public ObAlertType AlertType;
		public int Counter;
		public int NAlerts;
		public bool Standalone;

		public ObAlertButton()
        {
            AlertType = ObAlertType.None;
            Counter = 1;
            NAlerts = 1;
            Standalone = false;
		}

		~ObAlertButton()
        {
		}


	}//end ObAlertButton

}//end namespace Application
