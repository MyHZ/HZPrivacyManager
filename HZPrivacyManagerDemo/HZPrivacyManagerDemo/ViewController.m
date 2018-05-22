//
//  ViewController.m
//  HZPrivacyManagerDemo
//
//  Created by user on 2018/5/22.
//  Copyright © 2018年 HZ. All rights reserved.
//

#import "ViewController.h"
#import <HZPrivacyManager.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [HZPrivacyManager openSiriServiceWithBlock:^(BOOL isOpen) {
        
    }];
    
    [HZPrivacyManager openLocationServiceWithBlock:^(BOOL isOpen) {
        
    }];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
