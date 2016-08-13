/*
* Copyright (c) 2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  See class definition below.
*
*/

#ifndef TCMDADDUSERTOCLIENTRESOLVERCENREP_H
#define TCMDADDUSERTOCLIENTRESOLVERCENREP_H

// INCLUDES
#include "TTcSIPCommandBase.h"


// CLASS DEFINITION
/**
 * Command class responsible for setting
 * the client match type used by SIP 2G Client Resolver plug-in.
 */
class TCmdAddUserToClientResolverCenRep
	: public TTcSIPCommandBase
	{
	public:	// Constructors and destructor

		/**
		 * Constructor.
		 *
		 * @param aContext SIP Test case context
		 */
		TCmdAddUserToClientResolverCenRep( MTcTestContext& aContext )
						: TTcSIPCommandBase( aContext ) {};

	public: // From TTcSIPCommandBase

		void ExecuteL();

	public: // New methods

		/**
		 * Static function for matching the name of this command to
		 * a function identifier.
		 *
		 * @param aId An initialized identifier containing a function name.
		 * @return ETrue if this command matches the specified name.
		 */
		static TBool Match( const TTcIdentifier& aId );

		/**
		 * Static fuction for creating an instance of this class
		 *
		 * @param aContext SIP Test case context
		 * @return An initialized instance of this class.
		 */
		static TTcCommandBase* CreateL( MTcTestContext& aContext );
		
	private:
		
		void AddUidL( CRepository& aRepository,
            		  const TDesC8& aUserName,
            	      const TUid& aPluginUid,
            	      const TUid& aClientUid);
            
        TUint32 CreateNewKeyL( CRepository& aRepository,
            				   TUint32 aKey) const; 
	};

#endif // TCMDADDUSERTOCLIENTRESOLVERCENREP_H