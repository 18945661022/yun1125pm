//
//  MainViewController.m
//  Unity-iPhone
//
//  Created by Apple on 2017/12/13.
//

#import "MainViewController.h"
#import "UnityAppController.h"
#import "LoadViewController.h"


#define IMAGECOUNT 8

@interface MainViewController ()

//@property (nonatomic, strong) UIView *biv;
@property (nonatomic, retain) NSArray* array;
@property (nonatomic, retain) UIButton *button;
//-(void)printFrame:(CGRect)frame;
-(void)backUnity;
@end

@implementation MainViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    CGRect viewBounds = self.view.bounds;
    self.view.backgroundColor = [UIColor colorWithRed:100.0f/255.0f green:100.0f/255.0f blue:1.0f  alpha:1];
    
    //设置button
    _button = [[UIButton alloc] init];
    CGRect frame = CGRectZero;
    frame.size.width = 72;
    frame.size.height = 72;
    frame.origin.x = viewBounds.size.width/2-36;
    frame.origin.y = viewBounds.size.height*0.15-36;
    _button.frame = frame;
    
    _button.backgroundColor = [UIColor colorWithWhite:1.0f alpha:1];
    
    [self.view addSubview:_button];
    [_button addTarget:self  action:@selector(backUnity) forControlEvents:UIControlEventTouchUpInside];
   
    //[self.view addSubview:_biv];

}

- (void)didReceiveMemoryWarning {
    //释放self.view
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
    
}

-(void)backUnity{
    //第一次启动
    UnityAppController *uac = GetAppController();
    if([uac isFirstStarted]){
        
        //进度显示
        LoadViewController *lvc = [[LoadViewController alloc] init];
        CGRect lvcFrame = self.view.bounds;
        lvc.view.frame = lvcFrame;
        [uac performSelector:@selector(startUnity:) withObject:lvc afterDelay:0.2];
        [self.view addSubview:lvc.view];
        //[lvc release];
    }else{
        //[_sv.subviews makeObjectsPerformSelector:@selector(removeFromSuperview)];
        //[_button removeFromSuperview];
        //[_sv removeFromSuperview];
        //[self.view removeFromSuperview];
        //[self release];
        [uac bringROOTVFirst];
    }
}


/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (void)dealloc {
    NSLog(@"mainview dealloc");
    [_array release];
    
    [super dealloc];
}
@end
