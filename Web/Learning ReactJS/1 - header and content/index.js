function Navbar(){
    return (
        <header className="navbar">
            <span className="brand">My Website</span>
            <ul className="link-wrapper">
                <li>Home</li>
                <li>About</li>
                <li>Contact</li>
            </ul>
        </header>
    )
}

function Content(){
    return (
        <div className="content"> 
            My content!
        </div>
    )
}

function ActualBody(){
    return (
        <div>
            <Navbar></Navbar>
            <Content></Content>
        </div>
    )
}

ReactDOM.render(
    ActualBody(), 
    document.getElementById("root") 
);