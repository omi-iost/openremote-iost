///////////////////////////////////////////////////////////
//  ObButton.cs
//  Implementation of the Class ObButton
//  Generated by Enterprise Architect
//  Created on:      25-Feb-2024 22:46:49
//  Original author: ØyvindMisje
///////////////////////////////////////////////////////////

using System;
using System.Collections.Generic;
using System.Text;
using System.IO;

namespace OpenBridgeApp.Components.Button 
{
    public enum ObButtonSize
    {
        Regular = 0,
        Large
    }

    public enum ObButtonVariant
    {
        Normal = 0,
        Small
    }

	public class ObButton 
    {
		public bool Checked;
		public bool Disabled;
		public bool FullWidth;
		public bool HugText;
		public string Icon;
		public ObButtonSize Size;
		public ObButtonVariant Variant;

		public ObButton()
        {
            Checked = false;
            Disabled = false;
            FullWidth = false;
            HugText = false;
            Icon = string.Empty;
            Size = ObButtonSize.Regular;
            Variant = ObButtonVariant.Normal;
        }

		~ObButton()
        {
		}

	}//end ObButton
}//end namespace Button
