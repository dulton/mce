/*
* Copyright (c) 2004 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
* This component and the accompanying materials are made available
* under the terms of "Eclipse Public License v1.0"
* which accompanies this distribution, and is available
* at the URL "http://www.eclipse.org/legal/epl-v10.html".
*
* Initial Contributors:
* Nokia Corporation - initial contribution.
*
* Contributors:
*
* Description:  
*
*/




#ifndef __CREATECYPTOHANDLINGDIALOG__
#define __CREATECYPTOHANDLINGDIALOG__ (0x1)

// INCLUDES
#include <E32Base.h>
#include <eikbutb.h>
#include <eikenv.h>
#include <eikdialg.h>
#include <eikedwin.h>
//#include <eikchred.h>


#include <in_sock.h> // for TInetAddr
#include <es_sock.h> // for SetPort()
#include <utf.h>
#include <coeinput.h>
#include <eikmfne.h>
#include <AknPopupFieldText.h>

//#include <akndialog.h>
#include <aknform.h>

#include "MCETestUI.hrh"
#include "CMCETestUIEngine.h"

/**
 * @class CStartDTMFDialog
 *
 * A dialog that uses a CAknForm control
 * and allows a the user to edit session type parameters
 */

class CCurrentCryptoContextsDialog: public CAknForm
    {
    public:
       /**
         Perform the first phase of two phase construction
        @param aParams Receive parameters
        */
      //  CCreatePoCSessionDialog( CMCETestUIEngine ::TPoCSessionParams* aParams );
         CCurrentCryptoContextsDialog( TBool aCrypto32,TBool aCrypto80);

       /**
         Destroy the object
        */
        ~CCurrentCryptoContextsDialog();

    private: // from CEikDialog
       /**
         Exit and return values
        @param aKeyCode Key that terminated dialog
        @result Always returns ETrue, Ok to exit
        */
        TBool OkToExitL(TInt aKeyCode);

       /**
         Perform dynamic initialisation prior to displaying dialog
        */
        void PreLayoutDynInitL();

    private:
       TBool iCrypto32;
       TBool iCrypto80;
     
    };

/**
 * @class CStartDTMFDialog
 *
 * A dialog that uses a CAknForm control
 * and allows a the user to edit session type parameters
 */

class CSupportedCryptoContextsDialog: public CAknForm
    {
    public:
       /**
         Perform the first phase of two phase construction
        @param aParams Receive parameters
        */
      //  CCreatePoCSessionDialog( CMCETestUIEngine ::TPoCSessionParams* aParams );
         CSupportedCryptoContextsDialog( TBool aCrypto32,TBool aCrypto80);

       /**
         Destroy the object
        */
        ~CSupportedCryptoContextsDialog();

    private: // from CEikDialog
       /**
         Exit and return values
        @param aKeyCode Key that terminated dialog
        @result Always returns ETrue, Ok to exit
        */
        TBool OkToExitL(TInt aKeyCode);

       /**
         Perform dynamic initialisation prior to displaying dialog
        */
        void PreLayoutDynInitL();

    private:
       TBool iCrypto32;
       TBool iCrypto80;
     
    };
 /**
 * @class CStartDTMFDialog
 *
 * A dialog that uses a CAknForm control
 * and allows a the user to edit session type parameters
 */

class CGetCryptoContextsDialog: public CAknForm
    {
    public:
       /**
         Perform the first phase of two phase construction
        @param aParams Receive parameters
        */
      //  CCreatePoCSessionDialog( CMCETestUIEngine ::TPoCSessionParams* aParams );
         CGetCryptoContextsDialog( TBool& aCrypto32,TBool& aCrypto80);

       /**
         Destroy the object
        */
        ~CGetCryptoContextsDialog();

    private: // from CEikDialog
       /**
         Exit and return values
        @param aKeyCode Key that terminated dialog
        @result Always returns ETrue, Ok to exit
        */
        TBool OkToExitL(TInt aKeyCode);

       /**
         Perform dynamic initialisation prior to displaying dialog
        */
        void PreLayoutDynInitL();

    private:
       TBool& iCrypto32;
       TBool& iCrypto80;
     
    };
/**
 Append two message and pass it to a single message dialog.
 @param aMessage1
 @param aMessage2
 */
extern void MessageBox( const TDesC& aMessage1, const TDesC& aMessage2 );
       
/**
 Display message box dialog.
 @param aMessage
 */
extern void MessageBox( const TDesC& aMessage );

#endif // __CREATESESSIONDIALOG_H__

// End of File
