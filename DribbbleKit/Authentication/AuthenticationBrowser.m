//
//  AuthenticationBrowser.m
//  DribbbleKitDemo
//
//  Created by mafengwo on 15/8/11.
//  Copyright (c) 2015年 Aldaron. All rights reserved.
//

#import "AuthenticationBrowser.h"

@interface AuthenticationBrowser () <UIWebViewDelegate>
{
    UIActivityIndicatorView *activityIndicator;
}

@property (nonatomic, strong) UIWebView *webView;

@property (nonatomic, strong) NSURL *url;

@end

@implementation AuthenticationBrowser

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemCancel target:self action:@selector(closeBrowser:)];
    
    self.webView = [[UIWebView alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.webView.delegate = self;
    self.webView.scalesPageToFit = YES;
    [self.webView loadRequest:[NSURLRequest requestWithURL:_url]];
    [self.webView setAutoresizingMask:(UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleWidth)];
    [self.view addSubview:self.webView];
    
    activityIndicator = [[UIActivityIndicatorView alloc] initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleGray];
    activityIndicator.hidesWhenStopped = YES;
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc] initWithCustomView:activityIndicator];
}

- (void)closeBrowser:(id)sender
{
    _completionHandler(nil, [NSError errorWithDomain:@"MVDribbbleKit" code:1 userInfo:@{NSLocalizedDescriptionKey:@"User canceled authorization"}]);
    [self.navigationController popViewControllerAnimated:YES];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
}

#pragma mark - UIWebViewDelegate

- (void)webViewDidStartLoad:(UIWebView *)theWebView
{
    [activityIndicator startAnimating];
}

- (void)webViewDidFinishLoad:(UIWebView *)webView
{
    [activityIndicator stopAnimating];
    self.title = [self.webView stringByEvaluatingJavaScriptFromString:@"document.title"];
}

- (void)webView:(UIWebView *)webView didFailLoadWithError:(NSError *)error
{
    _completionHandler(nil, error);
}

- (BOOL)webView:(UIWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType
{
    NSString *requestURL = [[request URL] host];
    if ([requestURL isEqualToString:_callbackURL.host]) {
        [webView stopLoading];
        _completionHandler([request URL], nil);
        [self.navigationController popViewControllerAnimated:YES];
        return NO;
    }
    return YES;
}

@end
