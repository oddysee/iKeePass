//
//  ChildViewController.h
//  TestKeePass

/*
  iKeePass Password Safe - The Open-Source Password Manager
  Copyright (C) 2008-2009 Markus Schlecht and Karsten Fusenig
  
  
  based on KeePass
  Copyright (C) 2003-2005 Dominik Reichl <dominik.reichl@t-online.de>

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
#import <UIKit/UIKit.h>

@interface TopAlert : UIView

	NSString *messageText  ;
	- (void) setTitle: (NSString *)titleText;
	- (void) setMessage: (NSString *)messageText;
@end


@interface ChildViewController : UIViewController {
	NSDictionary *child;
	UINavigationController *navigationController;
	UITableView *myTableView;
	BOOL crypted;
	UILabel *passVal;
	
	TopAlert *alertView;
}

@property (readwrite, retain) NSDictionary *child;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@property (nonatomic, retain)	TopAlert *alertView;


- (NSString *) redisplayPassword:(NSString*) key;

@end
