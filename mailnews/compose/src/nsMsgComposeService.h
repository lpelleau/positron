/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*-
 *
 * The contents of this file are subject to the Netscape Public
 * License Version 1.1 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy of
 * the License at http://www.mozilla.org/NPL/
 *
 * Software distributed under the License is distributed on an "AS
 * IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * rights and limitations under the License.
 *
 * The Original Code is mozilla.org code.
 *
 * The Initial Developer of the Original Code is Netscape
 * Communications Corporation.  Portions created by Netscape are
 * Copyright (C) 1998 Netscape Communications Corporation. All
 * Rights Reserved.
 *
 * Contributor(s): 
 */

#include "nsIMsgComposeService.h"
#include "nsISupportsArray.h"
#include "nsIContentHandler.h"
#include "nsCOMPtr.h"
#include "nsICmdLineHandler.h"

class nsMsgComposeService : public nsIMsgComposeService, public nsIContentHandler, public nsICmdLineHandler
{
public: 
	nsMsgComposeService();
	virtual ~nsMsgComposeService();

	NS_DECL_ISUPPORTS
  NS_DECL_NSIMSGCOMPOSESERVICE
  NS_DECL_NSICONTENTHANDLER

  NS_DECL_NSICMDLINEHANDLER
  CMDLINEHANDLER_REGISTERPROC_DECLS 

private:
	nsCOMPtr<nsISupportsArray> m_msgQueue;
};
