using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;

namespace ClassLibrary1Example
{
    [Serializable]
    [ClassInterface(ClassInterfaceType.AutoDual)]
    public class Class1
    {
      /// <summary>
      /// Enum set of valid Sample states
      /// </summary>
      public enum SystemCheckState
      {
        /// <summary>
        /// Inital state.
        /// </summary>
        Created = 0,

        /// <summary>
        /// A System Check has been scheduled.
        /// </summary>
        Scheduled = Created + 1,

        /// <summary>
        /// The System Check is in progress
        /// </summary>
        Started = Scheduled + 1,

        /// <summary>
        /// The System Check is done.
        /// </summary>
        Done = Started + 1,
      };

    }
}
