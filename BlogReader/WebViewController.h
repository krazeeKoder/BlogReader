//
//  WebViewController.h
//  BlogReader
//
//  Created by Anthony Tulai on 2015-12-29.
//  Copyright © 2015 Amit Bijlani. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController

@property (strong, nonatomic) NSURL *blogPostURL;
@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end
