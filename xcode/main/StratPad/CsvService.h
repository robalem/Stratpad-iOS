//
//  CsvService.h
//  StratPad
//
//  Created by Julian Wood on 2013-06-24.
//  Copyright (c) 2013 Glassey Strategy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MessageUI/MessageUI.h>

@interface CsvService : NSObject<MFMailComposeViewControllerDelegate>
-(void)shareNetFinancials;
@end
